# Install script for directory: /home/sghwang/workspace/nptool/NPLib/TrackReconstruction

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/sghwang/workspace/nptool/NPLib/include/NPLinearRansac3D.h;/home/sghwang/workspace/nptool/NPLib/include/NPRansac.h;/home/sghwang/workspace/nptool/NPLib/include/NPCluster.h;/home/sghwang/workspace/nptool/NPLib/include/NPTrack.h;/home/sghwang/workspace/nptool/NPLib/include/Tracking.h;/home/sghwang/workspace/nptool/NPLib/include/NPTrackingUtility.h;/home/sghwang/workspace/nptool/NPLib/include/NPDCReconstruction.h;/home/sghwang/workspace/nptool/NPLib/include/NPDCReconstructionMT.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/sghwang/workspace/nptool/NPLib/include" TYPE FILE MESSAGE_LAZY FILES
    "/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/NPLinearRansac3D.h"
    "/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/NPRansac.h"
    "/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/NPCluster.h"
    "/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/NPTrack.h"
    "/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/Tracking.h"
    "/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/NPTrackingUtility.h"
    "/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/NPDCReconstruction.h"
    "/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/NPDCReconstructionMT.h"
    )
endif()

