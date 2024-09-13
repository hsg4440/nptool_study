file(GLOB SOURCES "./*.cc")
file(GLOB HEADERS "./*.hh")

add_library(NPSScorers SHARED ${SOURCES} ${HEADERS})

target_link_libraries(NPSScorers ${ROOT_LIBRARIES} ${Geant4_LIBRARIES} ${NPLib_LIBRARIES} -lNPInitialConditions -lNPInteractionCoordinates)
