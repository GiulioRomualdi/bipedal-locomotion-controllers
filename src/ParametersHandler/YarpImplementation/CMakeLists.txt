# Copyright (C) 2020 Istituto Italiano di Tecnologia (IIT). All rights reserved.
# This software may be modified and distributed under the terms of the
# GNU Lesser General Public License v2.1 or any later version.

# set target name
if(BIPEDAL_LOCOMOTION_CONTROLLERS_COMPILE_YarpImplementation)

  set(LIBRARY_TARGET_NAME ParametersHandlerYarpImplementation)

  # set cpp files
  set(${LIBRARY_TARGET_NAME}_SRC
    src/YarpImplementation.cpp
    )

  # set hpp files
  set(${LIBRARY_TARGET_NAME}_HDR
    include/BipedalLocomotionControllers/ParametersHandler/YarpImplementation.h
    include/BipedalLocomotionControllers/ParametersHandler/YarpImplementation.tpp
    )

  # add an executable to the project using the specified source files.
  add_library(${LIBRARY_TARGET_NAME} ${${LIBRARY_TARGET_NAME}_SRC} ${${LIBRARY_TARGET_NAME}_HDR})

  target_link_libraries(${LIBRARY_TARGET_NAME} PUBLIC
    BipedalLocomotionControllers::ParametersHandler
    BipedalLocomotionControllers::YarpUtilities
    YARP::YARP_os)

  add_library(BipedalLocomotionControllers::${LIBRARY_TARGET_NAME} ALIAS ${LIBRARY_TARGET_NAME})
  set_target_properties(${LIBRARY_TARGET_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}${LIBRARY_TARGET_NAME}")
  target_compile_features(${LIBRARY_TARGET_NAME} PUBLIC cxx_std_17)

  set_target_properties(${LIBRARY_TARGET_NAME} PROPERTIES VERSION ${BipedalLocomotionControllers_VERSION}
    PUBLIC_HEADER "${${LIBRARY_TARGET_NAME}_HDR}")

  # Specify include directories for both compilation and installation process.
  # The $<INSTALL_PREFIX> generator expression is useful to ensure to create
  # relocatable configuration files, see https://cmake.org/cmake/help/latest/manual/cmake-packages.7.html#creating-relocatable-packages
  target_include_directories(${LIBRARY_TARGET_NAME} PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")

  # Specify installation targets, typology and destination folders.
  install(TARGETS    ${LIBRARY_TARGET_NAME}
    EXPORT     ${PROJECT_NAME}
    COMPONENT  runtime
    LIBRARY       DESTINATION "${CMAKE_INSTALL_LIBDIR}"                                               COMPONENT shlib
    ARCHIVE       DESTINATION "${CMAKE_INSTALL_LIBDIR}"                                               COMPONENT lib
    RUNTIME       DESTINATION "${CMAKE_INSTALL_BINDIR}"                                               COMPONENT bin
    PUBLIC_HEADER DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/BipedalLocomotionControllers/ParametersHandler" COMPONENT dev)

  set_property(GLOBAL APPEND PROPERTY BipedalLocomotionControllers_TARGETS ${LIBRARY_TARGET_NAME})

  message(STATUS "Created target ${LIBRARY_TARGET_NAME} for export ${PROJECT_NAME}.")

endif()
