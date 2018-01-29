# Install script for directory: /home/md/pp/obs-studio/UI/obs-frontend-api

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/md/obs-studio-portable")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/64bit/libobs-frontend-api.so.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/64bit/libobs-frontend-api.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/64bit/libobs-frontend-api.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/64bit" TYPE SHARED_LIBRARY FILES
    "/home/md/pp/obs-studio/build/UI/obs-frontend-api/libobs-frontend-api.so.0.0"
    "/home/md/pp/obs-studio/build/UI/obs-frontend-api/libobs-frontend-api.so.0"
    "/home/md/pp/obs-studio/build/UI/obs-frontend-api/libobs-frontend-api.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/64bit/libobs-frontend-api.so.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/64bit/libobs-frontend-api.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/64bit/libobs-frontend-api.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/md/pp/obs-studio/build/libobs:"
           NEW_RPATH "$ORIGIN")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

