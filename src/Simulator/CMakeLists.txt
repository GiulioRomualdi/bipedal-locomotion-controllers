# Copyright (C) 2020 Istituto Italiano di Tecnologia (IIT). All rights reserved.
# This software may be modified and distributed under the terms of the
# GNU Lesser General Public License v2.1 or any later version.

# set target name
if(FRAMEWORK_COMPILE_Simulator)

  add_bipedal_locomotion_library(
    NAME                   Simulator
    SOURCES                src/Simulator.cpp src/Visualizer.cpp
    PUBLIC_HEADERS         include/BipedalLocomotion/Simulator/Simulator.h include/BipedalLocomotion/Simulator/Integrator.h include/BipedalLocomotion/Simulator/Integrator.tpp include/BipedalLocomotion/Simulator/Visualizer.h
    PUBLIC_LINK_LIBRARIES  BipedalLocomotion::ParametersHandler BipedalLocomotion::ContactModels BipedalLocomotion::System iDynTree::idyntree-core
    DEPENDS_ON_EIGEN_PRIVATE)

endif()
