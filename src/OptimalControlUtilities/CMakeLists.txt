# Copyright (C) 2019 Istituto Italiano di Tecnologia (IIT). All rights reserved.
# This software may be modified and distributed under the terms of the
# GNU Lesser General Public License v2.1 or any later version.

set(CMAKE_BUILD_TYPE Debug)

add_bipedal_locomotion_library(
    NAME                   OptimalControlUtilities
    SOURCES                src/OptimizationProblemElements.cpp src/CentroidalMomentumElements.cpp src/PDController.cpp src/ControlProblemElements.cpp src/RegularizationElements.cpp src/FeasibilityElements.cpp src/VariableHandler.cpp src/FloatingBaseMultiBodyDynamicsElements.cpp src/ZMPElements.cpp src/CentroidalMomentumElementsWithCompliantContacts.cpp src/CentroidalMomentumRateOfChangeElements.cpp src/CentroidalMomentumRateOfChangeBounds.cpp src/ContactModelElement.cpp src/ContactWrenchFeasibilityElement.cpp
    PUBLIC_HEADERS         include/BipedalLocomotion/OptimalControlUtilities/CartesianElements.h include/BipedalLocomotion/OptimalControlUtilities/CartesianElements.tpp include/BipedalLocomotion/OptimalControlUtilities/PDController.h include/BipedalLocomotion/OptimalControlUtilities/PIDController.h include/BipedalLocomotion/OptimalControlUtilities/PIDController.tpp include/BipedalLocomotion/OptimalControlUtilities/CentroidalMomentumElements.h include/BipedalLocomotion/OptimalControlUtilities/PDController.tpp include/BipedalLocomotion/OptimalControlUtilities/ControlProblemElements.h include/BipedalLocomotion/OptimalControlUtilities/RegularizationElements.h include/BipedalLocomotion/OptimalControlUtilities/FeasibilityElements.h include/BipedalLocomotion/OptimalControlUtilities/VariableHandler.h include/BipedalLocomotion/OptimalControlUtilities/FloatingBaseMultiBodyDynamicsElements.h include/BipedalLocomotion/OptimalControlUtilities/ZMPElements.h include/BipedalLocomotion/OptimalControlUtilities/OptimizationProblemElements.h include/BipedalLocomotion/OptimalControlUtilities/Frame.h include/BipedalLocomotion/OptimalControlUtilities/Frame.tpp include/BipedalLocomotion/OptimalControlUtilities/Weight.h include/BipedalLocomotion/OptimalControlUtilities/Weight.tpp include/BipedalLocomotion/OptimalControlUtilities/CentroidalMomentumElementsWithCompliantContacts.h include/BipedalLocomotion/OptimalControlUtilities/CentroidalMomentumRateOfChangeElements.h include/BipedalLocomotion/OptimalControlUtilities/CentroidalMomentumRateOfChangeBounds.h include/BipedalLocomotion/OptimalControlUtilities/ContactModelElement.h include/BipedalLocomotion/OptimalControlUtilities/ContactWrenchFeasibilityElement.h
    # SUBDIRECTORIES         tests
    PUBLIC_LINK_LIBRARIES  BipedalLocomotion::ParametersHandler BipedalLocomotion::ContactModels
    BipedalLocomotion::Simulator iDynTree::idyntree-core iDynTree::idyntree-core iDynTree::idyntree-high-level
    DEPENDS_ON_EIGEN_PRIVATE)

  set(CMAKE_BUILD_TYPE RelWithDebInfo)
