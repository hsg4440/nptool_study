add_custom_command(OUTPUT TTPCDRUMPhysicsDict.cxx COMMAND ../../scripts/build_dict.sh TTPCDRUMPhysics.h TTPCDRUMPhysicsDict.cxx TTPCDRUMPhysics.rootmap libNPTPCDRUM.dylib DEPENDS TTPCDRUMPhysics.h)
add_custom_command(OUTPUT TTPCDRUMDataDict.cxx COMMAND ../../scripts/build_dict.sh TTPCDRUMData.h TTPCDRUMDataDict.cxx TTPCDRUMData.rootmap libNPTPCDRUM.dylib DEPENDS TTPCDRUMData.h)
add_library(NPTPCDRUM SHARED TTPCDRUMSpectra.cxx TTPCDRUMData.cxx TTPCDRUMPhysics.cxx TTPCDRUMDataDict.cxx TTPCDRUMPhysicsDict.cxx )
target_link_libraries(NPTPCDRUM ${ROOT_LIBRARIES} NPCore) 
install(FILES TTPCDRUMData.h TTPCDRUMPhysics.h TTPCDRUMSpectra.h DESTINATION ${CMAKE_INCLUDE_OUTPUT_DIRECTORY})

