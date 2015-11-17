# Install script for directory: /home/pi/lemonpos/styles/simple

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/lemon/styles/simple/backg.png;/usr/share/kde4/apps/lemon/styles/simple/loginBackground.png;/usr/share/kde4/apps/lemon/styles/simple/loginBackground_1280x800.png;/usr/share/kde4/apps/lemon/styles/simple/loginBackground_1280x1024.png;/usr/share/kde4/apps/lemon/styles/simple/loginBackground_1024x768.png;/usr/share/kde4/apps/lemon/styles/simple/passwordBackground_wide.png;/usr/share/kde4/apps/lemon/styles/simple/passwordBackground.png;/usr/share/kde4/apps/lemon/styles/simple/pricechecker.png;/usr/share/kde4/apps/lemon/styles/simple/priceCheckerBack.png;/usr/share/kde4/apps/lemon/styles/simple/dialog.png;/usr/share/kde4/apps/lemon/styles/simple/simple.qss")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/usr/share/kde4/apps/lemon/styles/simple" TYPE FILE FILES
    "/home/pi/lemonpos/styles/simple/backg.png"
    "/home/pi/lemonpos/styles/simple/loginBackground.png"
    "/home/pi/lemonpos/styles/simple/loginBackground_1280x800.png"
    "/home/pi/lemonpos/styles/simple/loginBackground_1280x1024.png"
    "/home/pi/lemonpos/styles/simple/loginBackground_1024x768.png"
    "/home/pi/lemonpos/styles/simple/passwordBackground_wide.png"
    "/home/pi/lemonpos/styles/simple/passwordBackground.png"
    "/home/pi/lemonpos/styles/simple/pricechecker.png"
    "/home/pi/lemonpos/styles/simple/priceCheckerBack.png"
    "/home/pi/lemonpos/styles/simple/dialog.png"
    "/home/pi/lemonpos/styles/simple/simple.qss"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

