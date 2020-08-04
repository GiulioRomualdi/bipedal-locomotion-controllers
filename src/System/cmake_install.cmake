# Install script for directory: /home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1"
         RPATH "$ORIGIN/:$ORIGIN/../lib:/home/gromualdi/robot-code/robotology-superbuild/build/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1"
         OLD_RPATH "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib:/home/gromualdi/robot-code/robotology-superbuild/build/install/lib:"
         NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:/home/gromualdi/robot-code/robotology-superbuild/build/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so"
         RPATH "$ORIGIN/:$ORIGIN/../lib:/home/gromualdi/robot-code/robotology-superbuild/build/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib/libBipedalLocomotionFrameworkSystem.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so"
         OLD_RPATH "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/lib:/home/gromualdi/robot-code/robotology-superbuild/build/install/lib:"
         NEW_RPATH "$ORIGIN/:$ORIGIN/../lib:/home/gromualdi/robot-code/robotology-superbuild/build/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/BipedalLocomotion/System" TYPE FILE FILES
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/Advanceable.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/DynamicalSystem.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/FloatingBaseSystemDynamics.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/DynamicalSystem.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/ContactWrench.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/LinearTimeInvariantSystem.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/Integrator.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/Integrator.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/FixStepIntegrator.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/FixStepIntegrator.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/Integrator.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/ForwardEuler.h"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/ForwardEuler.tpp"
    "/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/src/System/include/BipedalLocomotion/System/FloatingBaseSystemKinematics.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators_bk/src/System/tests/cmake_install.cmake")

endif()

