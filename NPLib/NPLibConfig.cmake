# - Config file for the NPLib package
# It defines the following variables
#  NPLib_INCLUDE_DIRS - include directories for NPLib
#  NPLib_LIBRARIES    - libraries to link against
#  NPLib_EXECUTABLE   - the bar executable
 
# Compute paths
get_filename_component(NPLib_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(NPLib_USE_FILE "/home/sghwang/workspace/nptool/NPLib/NPLibConfig.cmake")
set(NPLib_INCLUDE_DIRS "/home/sghwang/workspace/nptool/NPLib/include")
set(NPLib_DETECTOR_LIST "")
set(NPTOOL "$ENV{NPTOOL}")
set(NPLIB "${NPTOOL}/NPLib")
include_directories("${NPLib_INCLUDE_DIRS}")

set(NPLib_LIBRARIES "-L/home/sghwang/workspace/nptool/NPLib/lib -lNPCore -lNPPhysics")

# These are IMPORTED targets created by NPLibTargets.cmake
set(NPLib_EXECUTABLE npanalysis nptool-installer)
