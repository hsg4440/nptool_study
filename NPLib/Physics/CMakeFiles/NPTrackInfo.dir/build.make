# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sghwang/workspace/nptool/NPLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sghwang/workspace/nptool/NPLib

# Include any dependencies generated for this target.
include Physics/CMakeFiles/NPTrackInfo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Physics/CMakeFiles/NPTrackInfo.dir/compiler_depend.make

# Include the progress variables for this target.
include Physics/CMakeFiles/NPTrackInfo.dir/progress.make

# Include the compile flags for this target's objects.
include Physics/CMakeFiles/NPTrackInfo.dir/flags.make

Physics/TTrackInfoDict.cxx: Physics/TTrackInfo.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sghwang/workspace/nptool/NPLib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating TTrackInfoDict.cxx"
	cd /home/sghwang/workspace/nptool/NPLib/Physics && ../scripts/build_dict.sh TTrackInfo.h TTrackInfoDict.cxx TTrackInfo.rootmap libNPTrackInfo.so

Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o: Physics/CMakeFiles/NPTrackInfo.dir/flags.make
Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o: Physics/TTrackInfo.cxx
Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o: Physics/CMakeFiles/NPTrackInfo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sghwang/workspace/nptool/NPLib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o"
	cd /home/sghwang/workspace/nptool/NPLib/Physics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o -MF CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o.d -o CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o -c /home/sghwang/workspace/nptool/NPLib/Physics/TTrackInfo.cxx

Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.i"
	cd /home/sghwang/workspace/nptool/NPLib/Physics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sghwang/workspace/nptool/NPLib/Physics/TTrackInfo.cxx > CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.i

Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.s"
	cd /home/sghwang/workspace/nptool/NPLib/Physics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sghwang/workspace/nptool/NPLib/Physics/TTrackInfo.cxx -o CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.s

Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o: Physics/CMakeFiles/NPTrackInfo.dir/flags.make
Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o: Physics/TTrackInfoDict.cxx
Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o: Physics/CMakeFiles/NPTrackInfo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sghwang/workspace/nptool/NPLib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o"
	cd /home/sghwang/workspace/nptool/NPLib/Physics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o -MF CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o.d -o CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o -c /home/sghwang/workspace/nptool/NPLib/Physics/TTrackInfoDict.cxx

Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.i"
	cd /home/sghwang/workspace/nptool/NPLib/Physics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sghwang/workspace/nptool/NPLib/Physics/TTrackInfoDict.cxx > CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.i

Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.s"
	cd /home/sghwang/workspace/nptool/NPLib/Physics && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sghwang/workspace/nptool/NPLib/Physics/TTrackInfoDict.cxx -o CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.s

# Object files for target NPTrackInfo
NPTrackInfo_OBJECTS = \
"CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o" \
"CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o"

# External object files for target NPTrackInfo
NPTrackInfo_EXTERNAL_OBJECTS =

lib/libNPTrackInfo.so: Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfo.cxx.o
lib/libNPTrackInfo.so: Physics/CMakeFiles/NPTrackInfo.dir/TTrackInfoDict.cxx.o
lib/libNPTrackInfo.so: Physics/CMakeFiles/NPTrackInfo.dir/build.make
lib/libNPTrackInfo.so: Physics/CMakeFiles/NPTrackInfo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sghwang/workspace/nptool/NPLib/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library ../lib/libNPTrackInfo.so"
	cd /home/sghwang/workspace/nptool/NPLib/Physics && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NPTrackInfo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Physics/CMakeFiles/NPTrackInfo.dir/build: lib/libNPTrackInfo.so
.PHONY : Physics/CMakeFiles/NPTrackInfo.dir/build

Physics/CMakeFiles/NPTrackInfo.dir/clean:
	cd /home/sghwang/workspace/nptool/NPLib/Physics && $(CMAKE_COMMAND) -P CMakeFiles/NPTrackInfo.dir/cmake_clean.cmake
.PHONY : Physics/CMakeFiles/NPTrackInfo.dir/clean

Physics/CMakeFiles/NPTrackInfo.dir/depend: Physics/TTrackInfoDict.cxx
	cd /home/sghwang/workspace/nptool/NPLib && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sghwang/workspace/nptool/NPLib /home/sghwang/workspace/nptool/NPLib/Physics /home/sghwang/workspace/nptool/NPLib /home/sghwang/workspace/nptool/NPLib/Physics /home/sghwang/workspace/nptool/NPLib/Physics/CMakeFiles/NPTrackInfo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Physics/CMakeFiles/NPTrackInfo.dir/depend

