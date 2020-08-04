# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.17)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget BipedalLocomotion::GenericContainer BipedalLocomotion::YarpUtilities BipedalLocomotion::ParametersHandlerYarpImplementation BipedalLocomotion::ParametersHandler BipedalLocomotion::Estimators BipedalLocomotion::System BipedalLocomotion::Contact BipedalLocomotion::ContactModels BipedalLocomotion::Framework)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target BipedalLocomotion::GenericContainer
add_library(BipedalLocomotion::GenericContainer INTERFACE IMPORTED)

set_target_properties(BipedalLocomotion::GenericContainer PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/GenericContainer/include"
  INTERFACE_LINK_LIBRARIES "iDynTree::idyntree-core"
)

# Create imported target BipedalLocomotion::YarpUtilities
add_library(BipedalLocomotion::YarpUtilities SHARED IMPORTED)

set_target_properties(BipedalLocomotion::YarpUtilities PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/YarpUtilities/include"
  INTERFACE_LINK_LIBRARIES "YARP::YARP_init;YARP::YARP_os;YARP::YARP_sig;YARP::YARP_dev;YARP::YARP_math;iDynTree::idyntree-core;iDynTree::idyntree-model;iDynTree::idyntree-sensors;iDynTree::idyntree-modelio-xml;iDynTree::idyntree-modelio-urdf;iDynTree::idyntree-estimation;iDynTree::idyntree-solid-shapes;iDynTree::idyntree-high-level;iDynTree::idyntree-inverse-kinematics;iDynTree::idyntree-optimalcontrol;iDynTree::idyntree-yarp;iDynTree::idyntree-icub;iDynTree::idyntree-visualization;BipedalLocomotion::GenericContainer"
)

# Create imported target BipedalLocomotion::ParametersHandlerYarpImplementation
add_library(BipedalLocomotion::ParametersHandlerYarpImplementation SHARED IMPORTED)

set_target_properties(BipedalLocomotion::ParametersHandlerYarpImplementation PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/ParametersHandler/YarpImplementation/include"
  INTERFACE_LINK_LIBRARIES "BipedalLocomotion::ParametersHandler;BipedalLocomotion::YarpUtilities;YARP::YARP_os"
)

# Create imported target BipedalLocomotion::ParametersHandler
add_library(BipedalLocomotion::ParametersHandler INTERFACE IMPORTED)

set_target_properties(BipedalLocomotion::ParametersHandler PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/ParametersHandler/include"
  INTERFACE_LINK_LIBRARIES "BipedalLocomotion::GenericContainer"
)

# Create imported target BipedalLocomotion::Estimators
add_library(BipedalLocomotion::Estimators SHARED IMPORTED)

set_target_properties(BipedalLocomotion::Estimators PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/Estimators/include"
  INTERFACE_LINK_LIBRARIES "BipedalLocomotion::ParametersHandler"
)

# Create imported target BipedalLocomotion::System
add_library(BipedalLocomotion::System SHARED IMPORTED)

set_target_properties(BipedalLocomotion::System PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include"
  INTERFACE_LINK_LIBRARIES "BipedalLocomotion::ParametersHandler;BipedalLocomotion::ContactModels;iDynTree::idyntree-high-level"
)

# Create imported target BipedalLocomotion::Contact
add_library(BipedalLocomotion::Contact SHARED IMPORTED)

set_target_properties(BipedalLocomotion::Contact PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/Planners/include"
  INTERFACE_LINK_LIBRARIES "iDynTree::idyntree-core"
)

# Create imported target BipedalLocomotion::ContactModels
add_library(BipedalLocomotion::ContactModels SHARED IMPORTED)

set_target_properties(BipedalLocomotion::ContactModels PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/ContactModels/include"
  INTERFACE_LINK_LIBRARIES "iDynTree::idyntree-core;BipedalLocomotion::ParametersHandler"
)

# Create imported target BipedalLocomotion::Framework
add_library(BipedalLocomotion::Framework INTERFACE IMPORTED)

set_target_properties(BipedalLocomotion::Framework PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/Autogenerated/BipedalLocomotion/Framework.h"
  INTERFACE_LINK_LIBRARIES "BipedalLocomotion::GenericContainer;BipedalLocomotion::YarpUtilities;BipedalLocomotion::ParametersHandlerYarpImplementation;BipedalLocomotion::ParametersHandler;BipedalLocomotion::Estimators;BipedalLocomotion::System;BipedalLocomotion::Contact;BipedalLocomotion::ContactModels"
)

# Import target "BipedalLocomotion::YarpUtilities" for configuration "Release"
set_property(TARGET BipedalLocomotion::YarpUtilities APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::YarpUtilities PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib/libBipedalLocomotionFrameworkYarpUtilities.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkYarpUtilities.so.0.0.1"
  )

# Import target "BipedalLocomotion::ParametersHandlerYarpImplementation" for configuration "Release"
set_property(TARGET BipedalLocomotion::ParametersHandlerYarpImplementation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::ParametersHandlerYarpImplementation PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib/libBipedalLocomotionFrameworkParametersHandlerYarpImplementation.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkParametersHandlerYarpImplementation.so.0.0.1"
  )

# Import target "BipedalLocomotion::Estimators" for configuration "Release"
set_property(TARGET BipedalLocomotion::Estimators APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::Estimators PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib/libBipedalLocomotionFrameworkEstimators.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkEstimators.so.0.0.1"
  )

# Import target "BipedalLocomotion::System" for configuration "Release"
set_property(TARGET BipedalLocomotion::System APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::System PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "iDynTree::idyntree-model"
  IMPORTED_LOCATION_RELEASE "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkSystem.so.0.0.1"
  )

# Import target "BipedalLocomotion::Contact" for configuration "Release"
set_property(TARGET BipedalLocomotion::Contact APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::Contact PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib/libBipedalLocomotionFrameworkContact.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkContact.so.0.0.1"
  )

# Import target "BipedalLocomotion::ContactModels" for configuration "Release"
set_property(TARGET BipedalLocomotion::ContactModels APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::ContactModels PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib/libBipedalLocomotionFrameworkContactModels.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkContactModels.so.0.0.1"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
