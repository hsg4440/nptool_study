add_custom_command(OUTPUT TnewDetPhysicsDict.cxx COMMAND ../../scripts/build_dict.sh TnewDetPhysics.h TnewDetPhysicsDict.cxx TnewDetPhysics.rootmap libNPnewDet.dylib DEPENDS TnewDetPhysics.h)
add_custom_command(OUTPUT TnewDetDataDict.cxx COMMAND ../../scripts/build_dict.sh TnewDetData.h TnewDetDataDict.cxx TnewDetData.rootmap libNPnewDet.dylib DEPENDS TnewDetData.h)
add_library(NPnewDet SHARED TnewDetSpectra.cxx TnewDetData.cxx TnewDetPhysics.cxx TnewDetDataDict.cxx TnewDetPhysicsDict.cxx )
target_link_libraries(NPnewDet ${ROOT_LIBRARIES} NPCore) 
install(FILES TnewDetData.h TnewDetPhysics.h TnewDetSpectra.h DESTINATION ${CMAKE_INCLUDE_OUTPUT_DIRECTORY})

