# Copyright (C) 2019 Istituto Italiano di Tecnologia (IIT). All rights reserved.
# This software may be modified and distributed under the terms of the
# GNU Lesser General Public License v2.1 or any later version.

# # set target name
# if(BIPEDAL_LOCOMOTION_CONTROLLERS_COMPILE_WholeBodyControllers)

set(CMAKE_BUILD_TYPE Debug)


  add_bipedal_locomotion_library(
    NAME                   WholeBodyControllers
    SOURCES                src/MomentumBasedControlHelper.cpp src/MomentumBasedControl.cpp
    PUBLIC_HEADERS         include/BipedalLocomotion/WholeBodyControllers/MomentumBasedControlHelper.h include/BipedalLocomotion/WholeBodyControllers/MomentumBasedControlHelper.tpp include/BipedalLocomotion/WholeBodyControllers/MomentumBasedControl.h
    PUBLIC_LINK_LIBRARIES  BipedalLocomotion::ParametersHandler  BipedalLocomotion::OptimalControlUtilities OsqpEigen::OsqpEigen iDynTree::idyntree-core
    DEPENDS_ON_EIGEN_PRIVATE)

  set(CMAKE_BUILD_TYPE RelWithDebInfo)

# eendif()
