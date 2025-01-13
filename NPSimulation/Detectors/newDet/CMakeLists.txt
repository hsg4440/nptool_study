add_library(NPSnewDet SHARED  newDet.cc)
target_link_libraries(NPSnewDet NPSCore ${ROOT_LIBRARIES} ${Geant4_LIBRARIES} ${NPLib_LIBRARIES} -lNPnewDet)
