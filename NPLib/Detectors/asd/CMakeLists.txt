add_custom_command(OUTPUT TasdPhysicsDict.cxx COMMAND ../../scripts/build_dict.sh TasdPhysics.h TasdPhysicsDict.cxx TasdPhysics.rootmap libNPasd.dylib DEPENDS TasdPhysics.h)
add_custom_command(OUTPUT TasdDataDict.cxx COMMAND ../../scripts/build_dict.sh TasdData.h TasdDataDict.cxx TasdData.rootmap libNPasd.dylib DEPENDS TasdData.h)
add_library(NPasd SHARED TasdSpectra.cxx TasdData.cxx TasdPhysics.cxx TasdDataDict.cxx TasdPhysicsDict.cxx )
target_link_libraries(NPasd ${ROOT_LIBRARIES} NPCore) 
install(FILES TasdData.h TasdPhysics.h TasdSpectra.h DESTINATION ${CMAKE_INCLUDE_OUTPUT_DIRECTORY})

