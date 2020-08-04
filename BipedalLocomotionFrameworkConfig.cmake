set(BipedalLocomotionFramework_VERSION 0.0.1)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was BipedalLocomotionFrameworkConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

#### Expanded from @PACKAGE_DEPENDENCIES@ by install_basic_package_files() ####

include(CMakeFindDependencyMacro)
set(CMAKE_MODULE_PATH_BK ${CMAKE_MODULE_PATH})
set(CMAKE_MODULE_PATH /home/gromualdi/robot-code/bipedal-locomotion-controllers_estimators/cmake /usr/local/lib/cmake/Catch2)
find_dependency(iDynTree)
find_dependency(YARP)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH_BK})

###############################################################################


if(NOT TARGET BipedalLocomotion::GenericContainer)
  include("${CMAKE_CURRENT_LIST_DIR}/BipedalLocomotionFrameworkTargets.cmake")
endif()

# Compatibility
get_property(BipedalLocomotionFramework_GenericContainer_INCLUDE_DIR TARGET BipedalLocomotion::GenericContainer PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_YarpUtilities_INCLUDE_DIR TARGET BipedalLocomotion::YarpUtilities PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_ParametersHandlerYarpImplementation_INCLUDE_DIR TARGET BipedalLocomotion::ParametersHandlerYarpImplementation PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_ParametersHandler_INCLUDE_DIR TARGET BipedalLocomotion::ParametersHandler PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_Estimators_INCLUDE_DIR TARGET BipedalLocomotion::Estimators PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_System_INCLUDE_DIR TARGET BipedalLocomotion::System PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_ContactModels_INCLUDE_DIR TARGET BipedalLocomotion::ContactModels PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_Simulator_INCLUDE_DIR TARGET BipedalLocomotion::Simulator PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_Contact_INCLUDE_DIR TARGET BipedalLocomotion::Contact PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_OptimalControlUtilities_INCLUDE_DIR TARGET BipedalLocomotion::OptimalControlUtilities PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_WholeBodyControllers_INCLUDE_DIR TARGET BipedalLocomotion::WholeBodyControllers PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
get_property(BipedalLocomotionFramework_Framework_INCLUDE_DIR TARGET BipedalLocomotion::Framework PROPERTY INTERFACE_INCLUDE_DIRECTORIES)

set(BipedalLocomotionFramework_LIBRARIES BipedalLocomotion::GenericContainer BipedalLocomotion::YarpUtilities BipedalLocomotion::ParametersHandlerYarpImplementation BipedalLocomotion::ParametersHandler BipedalLocomotion::Estimators BipedalLocomotion::System BipedalLocomotion::ContactModels BipedalLocomotion::Simulator BipedalLocomotion::Contact BipedalLocomotion::OptimalControlUtilities BipedalLocomotion::WholeBodyControllers BipedalLocomotion::Framework)
set(BipedalLocomotionFramework_INCLUDE_DIRS "${BipedalLocomotionFramework_GenericContainer_INCLUDE_DIR}" "${BipedalLocomotionFramework_YarpUtilities_INCLUDE_DIR}" "${BipedalLocomotionFramework_ParametersHandlerYarpImplementation_INCLUDE_DIR}" "${BipedalLocomotionFramework_ParametersHandler_INCLUDE_DIR}" "${BipedalLocomotionFramework_Estimators_INCLUDE_DIR}" "${BipedalLocomotionFramework_System_INCLUDE_DIR}" "${BipedalLocomotionFramework_ContactModels_INCLUDE_DIR}" "${BipedalLocomotionFramework_Simulator_INCLUDE_DIR}" "${BipedalLocomotionFramework_Contact_INCLUDE_DIR}" "${BipedalLocomotionFramework_OptimalControlUtilities_INCLUDE_DIR}" "${BipedalLocomotionFramework_WholeBodyControllers_INCLUDE_DIR}" "${BipedalLocomotionFramework_Framework_INCLUDE_DIR}")
list(REMOVE_DUPLICATES BipedalLocomotionFramework_INCLUDE_DIRS)


