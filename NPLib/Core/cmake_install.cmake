# Install script for directory: /home/sghwang/workspace/nptool/NPLib/Core

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
   "/home/sghwang/workspace/nptool/NPLib/include/NPCore.h;/home/sghwang/workspace/nptool/NPLib/include/NPVAnalysis.h;/home/sghwang/workspace/nptool/NPLib/include/NPAnalysisFactory.h;/home/sghwang/workspace/nptool/NPLib/include/NPRandom.h;/home/sghwang/workspace/nptool/NPLib/include/NPCalibrationManager.h;/home/sghwang/workspace/nptool/NPLib/include/NPOptionManager.h;/home/sghwang/workspace/nptool/NPLib/include/RootInput.h;/home/sghwang/workspace/nptool/NPLib/include/RootOutput.h;/home/sghwang/workspace/nptool/NPLib/include/RootHistogramsCalib.h;/home/sghwang/workspace/nptool/NPLib/include/TAsciiFile.h;/home/sghwang/workspace/nptool/NPLib/include/NPDetectorManager.h;/home/sghwang/workspace/nptool/NPLib/include/NPVTreeReader.h;/home/sghwang/workspace/nptool/NPLib/include/NPVDetector.h;/home/sghwang/workspace/nptool/NPLib/include/NPGlobalSystemOfUnits.h;/home/sghwang/workspace/nptool/NPLib/include/NPPhysicalConstants.h;/home/sghwang/workspace/nptool/NPLib/include/NPSystemOfUnits.h;/home/sghwang/workspace/nptool/NPLib/include/NPVSpectra.h;/home/sghwang/workspace/nptool/NPLib/include/NPDetectorFactory.h;/home/sghwang/workspace/nptool/NPLib/include/NPSpectraServer.h;/home/sghwang/workspace/nptool/NPLib/include/NPInputParser.h;/home/sghwang/workspace/nptool/NPLib/include/NPImage.h;/home/sghwang/workspace/nptool/NPLib/include/NPElog.h;/home/sghwang/workspace/nptool/NPLib/include/NPDeltaSpectra.h;/home/sghwang/workspace/nptool/NPLib/include/NPXmlParser.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/sghwang/workspace/nptool/NPLib/include" TYPE FILE MESSAGE_LAZY FILES
    "/home/sghwang/workspace/nptool/NPLib/Core/NPCore.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPVAnalysis.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPAnalysisFactory.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPRandom.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPCalibrationManager.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPOptionManager.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/RootInput.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/RootOutput.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/RootHistogramsCalib.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/TAsciiFile.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPDetectorManager.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPVTreeReader.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPVDetector.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPGlobalSystemOfUnits.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPPhysicalConstants.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPSystemOfUnits.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPVSpectra.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPDetectorFactory.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPSpectraServer.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPInputParser.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPImage.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPElog.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPDeltaSpectra.h"
    "/home/sghwang/workspace/nptool/NPLib/Core/NPXmlParser.h"
    )
endif()

