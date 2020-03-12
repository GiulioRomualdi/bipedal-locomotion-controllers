# Copyright (C) 2019 Istituto Italiano di Tecnologia (IIT). All rights reserved.
# This software may be modified and distributed under the terms of the
# GNU Lesser General Public License v2.1 or any later version.

function(add_bipedal_component)

  set(options IS_INTERFACE)
  set(oneValueArgs NAME)
  set(multiValueArgs
    SOURCES
    PUBLIC_HEADERS
    PRIVATE_HEADERS
    PUBLIC_LINK_LIBRARIES
    PRIVATE_LINK_LIBRARIES
    SUBDIRECTORIES)

  set(prefix "bipedal_component")

  cmake_parse_arguments(${prefix}
    "${options}"
    "${oneValueArgs}"
    "${multiValueArgs}"
    ${ARGN})

  set(name ${${prefix}_NAME})
  set(is_interface ${${prefix}_IS_INTERFACE})
  set(sources ${${prefix}_SOURCES})
  set(public_headers ${${prefix}_PUBLIC_HEADERS})
  set(private_headers ${${prefix}_PRIVATE_HEADERS})
  set(public_link_libraries ${${prefix}_PUBLIC_LINK_LIBRARIES})
  set(private_link_libraries ${${prefix}_PRIVATE_LINK_LIBRARIES})
  set(subdirectories ${${prefix}_SUBDIRECTORIES})

  # The building process is different if the component is an INTERFACE
  if(is_interface)

    add_library(${name} INTERFACE)

    # Add C++17 features
    target_compile_features(${name} INTERFACE cxx_std_17)

    # Specify include directories for both compilation and installation process.
    # The $<INSTALL_PREFIX> generator expression is useful to ensure to create
    # relocatable configuration files, see https://cmake.org/cmake/help/latest/manual/cmake-packages.7.html
    # creating-relocatable-packages
    target_include_directories(${name} INTERFACE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
      "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")

    # Specify installation targets, typology and destination folders.
    install(TARGETS        ${name}
      EXPORT               ${PROJECT_NAME}
      COMPONENT            runtime)

    install(FILES ${public_headers} DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotionControllers/${name}")
    install(FILES ${private_headers} DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotionControllers/${name}/impl")

  else()

    # add an executable to the project using the specified source files.
    add_library(${name} ${sources} ${public_headers} ${private_headers})

    # Add C++17 features
    target_compile_features(${name} PUBLIC cxx_std_17)

    target_link_libraries(${name} PUBLIC ${public_link_libraries})
    target_link_libraries(${name} PRIVATE ${private_link_libraries})

    set_target_properties(${name} PROPERTIES
      VERSION ${BipedalLocomotionControllers_VERSION}
      PUBLIC_HEADER "${public_headers}"
      PRIVATE_HEADER "${private_headers}")

    # Specify include directories for both compilation and installation process.
    # The $<INSTALL_PREFIX> generator expression is useful to ensure to create
    # relocatable configuration files, see https://cmake.org/cmake/help/latest/manual/cmake-packages.7.html
    #creating-relocatable-packages
    target_include_directories(${name} PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
      "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")

    # Specify installation targets, typology and destination folders.
    install(TARGETS    ${name}
      EXPORT           ${PROJECT_NAME}
      COMPONENT        runtime
      LIBRARY          DESTINATION "${CMAKE_INSTALL_LIBDIR}"                                                COMPONENT shlib
      ARCHIVE          DESTINATION "${CMAKE_INSTALL_LIBDIR}"                                                COMPONENT lib
      RUNTIME          DESTINATION "${CMAKE_INSTALL_BINDIR}"                                                COMPONENT bin
      PUBLIC_HEADER    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotionControllers/${name}"       COMPONENT dev
      PRIVATE_HEADER   DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotionControllers/${name}/impl"  COMPONENT dev)

  endif()

  # add alias
  add_library(BipedalLocomotionControllers::${name} ALIAS ${name})

  # Add all subdirectories
  foreach(subdir ${subdirectories})
    add_subdirectory(${subdir})
  endforeach()

  set_property(GLOBAL APPEND PROPERTY BipedalLocomotionControllers_TARGETS ${name})

  message(STATUS "Created target ${name} for export ${PROJECT_NAME}.")

endfunction()
