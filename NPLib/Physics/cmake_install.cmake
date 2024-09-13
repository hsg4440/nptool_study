# Install script for directory: /home/sghwang/workspace/nptool/NPLib/Physics

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
   "/home/sghwang/workspace/nptool/NPLib/include/GEF.h;/home/sghwang/workspace/nptool/NPLib/include/NPFissionDecay.h;/home/sghwang/workspace/nptool/NPLib/include/NPDecay.h;/home/sghwang/workspace/nptool/NPLib/include/NPBeam.h;/home/sghwang/workspace/nptool/NPLib/include/NPEnergyLoss.h;/home/sghwang/workspace/nptool/NPLib/include/NPFunction.h;/home/sghwang/workspace/nptool/NPLib/include/NPParticle.h;/home/sghwang/workspace/nptool/NPLib/include/NPNucleus.h;/home/sghwang/workspace/nptool/NPLib/include/NPReaction.h;/home/sghwang/workspace/nptool/NPLib/include/NPPhaseSpace.h;/home/sghwang/workspace/nptool/NPLib/include/NPQFS.h;/home/sghwang/workspace/nptool/NPLib/include/NPTimeStamp.h;/home/sghwang/workspace/nptool/NPLib/include/TInitialConditions.h;/home/sghwang/workspace/nptool/NPLib/include/TTrackInfo.h;/home/sghwang/workspace/nptool/NPLib/include/TInteractionCoordinates.h;/home/sghwang/workspace/nptool/NPLib/include/TReactionConditions.h;/home/sghwang/workspace/nptool/NPLib/include/TFissionConditions.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/sghwang/workspace/nptool/NPLib/include" TYPE FILE MESSAGE_LAZY FILES
    "/home/sghwang/workspace/nptool/NPLib/Physics/GEF.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPFissionDecay.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPDecay.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPBeam.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPEnergyLoss.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPFunction.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPParticle.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPNucleus.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPReaction.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPPhaseSpace.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPQFS.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/NPTimeStamp.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/TInitialConditions.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/TTrackInfo.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/TInteractionCoordinates.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/TReactionConditions.h"
    "/home/sghwang/workspace/nptool/NPLib/Physics/TFissionConditions.h"
    )
endif()

