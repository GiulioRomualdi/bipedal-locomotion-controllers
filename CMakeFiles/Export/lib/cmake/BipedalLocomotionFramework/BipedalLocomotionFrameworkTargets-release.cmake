#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "BipedalLocomotion::YarpUtilities" for configuration "Release"
set_property(TARGET BipedalLocomotion::YarpUtilities APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::YarpUtilities PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkYarpUtilities.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkYarpUtilities.so.0.0.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS BipedalLocomotion::YarpUtilities )
list(APPEND _IMPORT_CHECK_FILES_FOR_BipedalLocomotion::YarpUtilities "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkYarpUtilities.so.0.0.1" )

# Import target "BipedalLocomotion::ParametersHandlerYarpImplementation" for configuration "Release"
set_property(TARGET BipedalLocomotion::ParametersHandlerYarpImplementation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::ParametersHandlerYarpImplementation PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkParametersHandlerYarpImplementation.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkParametersHandlerYarpImplementation.so.0.0.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS BipedalLocomotion::ParametersHandlerYarpImplementation )
list(APPEND _IMPORT_CHECK_FILES_FOR_BipedalLocomotion::ParametersHandlerYarpImplementation "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkParametersHandlerYarpImplementation.so.0.0.1" )

# Import target "BipedalLocomotion::Estimators" for configuration "Release"
set_property(TARGET BipedalLocomotion::Estimators APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::Estimators PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkEstimators.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkEstimators.so.0.0.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS BipedalLocomotion::Estimators )
list(APPEND _IMPORT_CHECK_FILES_FOR_BipedalLocomotion::Estimators "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkEstimators.so.0.0.1" )

# Import target "BipedalLocomotion::System" for configuration "Release"
set_property(TARGET BipedalLocomotion::System APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::System PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "iDynTree::idyntree-model"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkSystem.so.0.0.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS BipedalLocomotion::System )
list(APPEND _IMPORT_CHECK_FILES_FOR_BipedalLocomotion::System "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkSystem.so.0.0.1" )

# Import target "BipedalLocomotion::Contact" for configuration "Release"
set_property(TARGET BipedalLocomotion::Contact APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::Contact PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkContact.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkContact.so.0.0.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS BipedalLocomotion::Contact )
list(APPEND _IMPORT_CHECK_FILES_FOR_BipedalLocomotion::Contact "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkContact.so.0.0.1" )

# Import target "BipedalLocomotion::ContactModels" for configuration "Release"
set_property(TARGET BipedalLocomotion::ContactModels APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(BipedalLocomotion::ContactModels PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkContactModels.so.0.0.1"
  IMPORTED_SONAME_RELEASE "libBipedalLocomotionFrameworkContactModels.so.0.0.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS BipedalLocomotion::ContactModels )
list(APPEND _IMPORT_CHECK_FILES_FOR_BipedalLocomotion::ContactModels "${_IMPORT_PREFIX}/lib/libBipedalLocomotionFrameworkContactModels.so.0.0.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
