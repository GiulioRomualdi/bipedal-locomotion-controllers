# Install script for directory: /home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/gromualdi/robot-code/robotology-superbuild/build/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/lib/libBipedalLocomotionFrameworkOptimalControlUtilities.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/BipedalLocomotion/OptimalControlUtilities" TYPE FILE FILES
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/CartesianElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/CartesianElements.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/PDController.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/PIDController.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/PIDController.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/CentroidalMomentumElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/PDController.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/ControlProblemElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/RegularizationElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/FeasibilityElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/VariableHandler.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/FloatingBaseMultiBodyDynamicsElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/ZMPElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/OptimizationProblemElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/Frame.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/Frame.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/Weight.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/Weight.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/CentroidalMomentumElementsWithCompliantContacts.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/CentroidalMomentumRateOfChangeElements.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/CentroidalMomentumRateOfChangeBounds.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/ContactModelElement.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/OptimalControlUtilities/include/BipedalLocomotion/OptimalControlUtilities/ContactWrenchFeasibilityElement.h"
    )
endif()

