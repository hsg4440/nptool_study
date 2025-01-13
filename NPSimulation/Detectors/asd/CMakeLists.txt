add_library(NPSasd SHARED  asd.cc)
target_link_libraries(NPSasd NPSCore ${ROOT_LIBRARIES} ${Geant4_LIBRARIES} ${NPLib_LIBRARIES} -lNPasd)
