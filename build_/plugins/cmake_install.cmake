# Install script for directory: /home/md/pp/obs-studio/plugins

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/md/pp/obs-studio/build/plugins/linux-capture/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/linux-pulseaudio/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/linux-v4l2/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/linux-jack/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/linux-alsa/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/decklink/linux/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/vlc-video/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/image-source/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/obs-x264/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/obs-libfdk/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/obs-ffmpeg/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/obs-outputs/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/obs-filters/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/obs-transitions/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/obs-text/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/rtmp-services/cmake_install.cmake")
  include("/home/md/pp/obs-studio/build/plugins/text-freetype2/cmake_install.cmake")

endif()

