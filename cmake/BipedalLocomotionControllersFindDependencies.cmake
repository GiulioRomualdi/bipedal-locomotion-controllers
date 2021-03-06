# Copyright (C) 2019 Istituto Italiano di Tecnologia (IIT). All rights reserved.
# This software may be modified and distributed under the terms of the
# GNU Lesser General Public License v2.1 or any later version.
#
# This software may be modified and distributed under the terms of the
# BSD-3-Clause license. See the accompanying LICENSE file for details.

# This module checks if all the dependencies are installed and if the
# dependencies to build some parts of BIPEDAL_LOCOMOTION_CONTROLLERS are satisfied.
# For every dependency, it creates the following variables:
#
# BIPEDAL_LOCOMOTION_CONTROLLERS_USE_${Package}: Can be disabled by the user if he doesn't want to use that
#                      dependency.
# BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_${Package}: Internal flag. It should be used to check if a part of
#                      BIPEDAL_LOCOMOTION_CONTROLLERS should be built. It is on if BIPEDAL_LOCOMOTION_CONTROLLERS_USE_${Package} is
#                      on and either the package was found or will be built.
# BIPEDAL_LOCOMOTION_CONTROLLERS_BUILD_${Package}: Internal flag. Used to check if BIPEDAL_LOCOMOTION_CONTROLLERS has to build an
#                        external package.
# BIPEDAL_LOCOMOTION_CONTROLLERS_BUILD_DEPS_${Package}: Internal flag. Used to check if dependencies
#                             required to build the package are available.
# BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_SYSTEM_${Package}: Internal flag. Used to check if the package is
#                             available on the system.
# BIPEDAL_LOCOMOTION_CONTROLLERS_USE_SYSTEM_${Package}: This flag is shown only for packages in the
#                             extern folder that were also found on the system
#                             (TRUE by default). If this flag is enabled, the
#                             system installed library will be used instead of
#                             the version shipped with BIPEDAL_LOCOMOTION_CONTROLLERS.


include(CMakeDependentOption)

# Check if a package is installed and set some cmake variables
macro(checkandset_dependency package)

  string(TOUPPER ${package} PKG)

  # BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_SYSTEM_${package}
  if(${package}_FOUND OR ${PKG}_FOUND)
    set(BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_SYSTEM_${package} TRUE)
  else()
    set(BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_SYSTEM_${package} FALSE)
  endif()

  # BIPEDAL_LOCOMOTION_CONTROLLERS_USE_${package}
  cmake_dependent_option(BIPEDAL_LOCOMOTION_CONTROLLERS_USE_${package} "Use package ${package}" TRUE
                         BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_SYSTEM_${package} FALSE)
  mark_as_advanced(BIPEDAL_LOCOMOTION_CONTROLLERS_USE_${package})

  # BIPEDAL_LOCOMOTION_CONTROLLERS_USE_SYSTEM_${package}
  set(BIPEDAL_LOCOMOTION_CONTROLLERS_USE_SYSTEM_${package} ${BIPEDAL_LOCOMOTION_CONTROLLERS_USE_${package}} CACHE INTERNAL "Use system-installed ${package}, rather than a private copy (recommended)" FORCE)
  if(NOT "${package}" STREQUAL "${PKG}")
    unset(BIPEDAL_LOCOMOTION_CONTROLLERS_USE_SYSTEM_${PKG} CACHE) # Deprecated since BIPEDAL_LOCOMOTION_CONTROLLERS 3.2
  endif()

  # BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_${package}
  if(${BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_SYSTEM_${package}})
    set(BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_${package} ${BIPEDAL_LOCOMOTION_CONTROLLERS_USE_${package}})
  else()
    set(BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_${package} FALSE)
  endif()

endmacro()

macro(BIPEDAL_LOCOMOTION_CONTROLLERS_DEPENDENT_OPTION _option _doc _default _deps _force)

  if(DEFINED ${_option})
    get_property(_option_strings_set CACHE ${_option} PROPERTY STRINGS SET)
    if(_option_strings_set)
      # If the user thinks he is smarter than the machine, he deserves an error
      get_property(_option_strings CACHE ${_option} PROPERTY STRINGS)
      list(GET _option_strings 0 _option_strings_first)
      string(REGEX REPLACE ".+\"(.+)\".+" "\\1" _option_strings_first "${_option_strings_first}")
      list(LENGTH _option_strings _option_strings_length)
      math(EXPR _option_strings_last_index "${_option_strings_length} - 1")
      list(GET _option_strings ${_option_strings_last_index} _option_strings_last)
      if("${${_option}}" STREQUAL "${_option_strings_last}")
        message(SEND_ERROR "That was a trick, you cannot outsmart me! I will never let you win! ${_option} stays OFF until I say so! \"${_option_strings_first}\" is needed to enable ${_option}. Now stop bothering me, and install your dependencies, if you really want to enable this option.")
      endif()
      unset(${_option} CACHE)
    endif()
  endif()

  cmake_dependent_option(${_option} "${_doc}" ${_default} "${_deps}" ${_force})

  unset(_missing_deps)
  foreach(_dep ${_deps})
    string(REGEX REPLACE " +" ";" _depx "${_dep}")
    if(NOT (${_depx}))
      list(APPEND _missing_deps "${_dep}")
    endif()
  endforeach()

  if(DEFINED _missing_deps)
    set(${_option}_disable_reason " (dependencies unsatisfied: \"${_missing_deps}\")")
    # Set a value that can be visualized on ccmake and on cmake-gui, but
    # still evaluates to false
    set(${_option} "OFF - Dependencies unsatisfied: '${_missing_deps}' - ${_option}-NOTFOUND" CACHE STRING "${_option_doc}" FORCE)
    string(REPLACE ";" "\;" _missing_deps "${_missing_deps}")
    set_property(CACHE ${_option}
                PROPERTY STRINGS "OFF - Dependencies unsatisfied: '${_missing_deps}' - ${_option}-NOTFOUND"
                                 "OFF - You can try as much as you want, but '${_missing_deps}' is needed to enable ${_option} - ${_option}-NOTFOUND"
                                 "OFF - Are you crazy or what? '${_missing_deps}' is needed to enable ${_option} - ${_option}-NOTFOUND"
                                 "OFF - Didn't I already tell you that '${_missing_deps}' is needed to enable ${_option}? - ${_option}-NOTFOUND"
                                 "OFF - Stop it! - ${_option}-NOTFOUND"
                                 "OFF - This is insane! Leave me alone! - ${_option}-NOTFOUND"
                                 "ON - All right, you win. The option is enabled. Are you happy now? You just broke the build.")
    # Set non-cache variable that will override the value in current scope
    # For parent scopes, the "-NOTFOUND ensures that the variable still
    # evaluates to false
    set(${_option} ${_force})
  endif()

endmacro()



################################################################################
# Find all packages

find_package(iDynTree 0.11.105 QUIET)
checkandset_dependency(iDynTree)

find_package(YARP QUIET)
checkandset_dependency(YARP)

bipedal_locomotion_controllers_dependent_option(BIPEDAL_LOCOMOTION_CONTROLLERS_COMPILE_YarpUtilities
  "Compile YarpHelper library?" ON
  "BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_YARP;BIPEDAL_LOCOMOTION_CONTROLLERS_HAS_iDynTree" OFF)

bipedal_locomotion_controllers_dependent_option(BIPEDAL_LOCOMOTION_CONTROLLERS_COMPILE_YarpImplementation
  "Compile All the YARP implementations?" ON
  "BIPEDAL_LOCOMOTION_CONTROLLERS_COMPILE_YarpUtilities" OFF)
