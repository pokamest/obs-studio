# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/md/pp/obs-studio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/md/pp/obs-studio/build

# Include any dependencies generated for this target.
include plugins/image-source/CMakeFiles/image-source.dir/depend.make

# Include the progress variables for this target.
include plugins/image-source/CMakeFiles/image-source.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/image-source/CMakeFiles/image-source.dir/flags.make

plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o: plugins/image-source/CMakeFiles/image-source.dir/flags.make
plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o: ../plugins/image-source/image-source.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/image-source.dir/image-source.c.o   -c /home/md/pp/obs-studio/plugins/image-source/image-source.c

plugins/image-source/CMakeFiles/image-source.dir/image-source.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image-source.dir/image-source.c.i"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/image-source/image-source.c > CMakeFiles/image-source.dir/image-source.c.i

plugins/image-source/CMakeFiles/image-source.dir/image-source.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image-source.dir/image-source.c.s"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/image-source/image-source.c -o CMakeFiles/image-source.dir/image-source.c.s

plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o.requires:

.PHONY : plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o.requires

plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o.provides: plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o.requires
	$(MAKE) -f plugins/image-source/CMakeFiles/image-source.dir/build.make plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o.provides.build
.PHONY : plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o.provides

plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o.provides.build: plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o


plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o: plugins/image-source/CMakeFiles/image-source.dir/flags.make
plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o: ../plugins/image-source/color-source.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/image-source.dir/color-source.c.o   -c /home/md/pp/obs-studio/plugins/image-source/color-source.c

plugins/image-source/CMakeFiles/image-source.dir/color-source.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image-source.dir/color-source.c.i"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/image-source/color-source.c > CMakeFiles/image-source.dir/color-source.c.i

plugins/image-source/CMakeFiles/image-source.dir/color-source.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image-source.dir/color-source.c.s"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/image-source/color-source.c -o CMakeFiles/image-source.dir/color-source.c.s

plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o.requires:

.PHONY : plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o.requires

plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o.provides: plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o.requires
	$(MAKE) -f plugins/image-source/CMakeFiles/image-source.dir/build.make plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o.provides.build
.PHONY : plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o.provides

plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o.provides.build: plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o


plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o: plugins/image-source/CMakeFiles/image-source.dir/flags.make
plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o: ../plugins/image-source/obs-slideshow.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/image-source.dir/obs-slideshow.c.o   -c /home/md/pp/obs-studio/plugins/image-source/obs-slideshow.c

plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image-source.dir/obs-slideshow.c.i"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/image-source/obs-slideshow.c > CMakeFiles/image-source.dir/obs-slideshow.c.i

plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image-source.dir/obs-slideshow.c.s"
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/image-source/obs-slideshow.c -o CMakeFiles/image-source.dir/obs-slideshow.c.s

plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o.requires:

.PHONY : plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o.requires

plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o.provides: plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o.requires
	$(MAKE) -f plugins/image-source/CMakeFiles/image-source.dir/build.make plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o.provides.build
.PHONY : plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o.provides

plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o.provides.build: plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o


# Object files for target image-source
image__source_OBJECTS = \
"CMakeFiles/image-source.dir/image-source.c.o" \
"CMakeFiles/image-source.dir/color-source.c.o" \
"CMakeFiles/image-source.dir/obs-slideshow.c.o"

# External object files for target image-source
image__source_EXTERNAL_OBJECTS =

plugins/image-source/image-source.so: plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o
plugins/image-source/image-source.so: plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o
plugins/image-source/image-source.so: plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o
plugins/image-source/image-source.so: plugins/image-source/CMakeFiles/image-source.dir/build.make
plugins/image-source/image-source.so: libobs/libobs.so.0
plugins/image-source/image-source.so: plugins/image-source/CMakeFiles/image-source.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C shared module image-source.so"
	cd /home/md/pp/obs-studio/build/plugins/image-source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/image-source.dir/link.txt --verbose=$(VERBOSE)
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cmake -E copy /home/md/pp/obs-studio/build/plugins/image-source/image-source.so /home/md/pp/obs-studio/build/rundir/RelWithDebInfo/obs-plugins/64bit/image-source.so
	cd /home/md/pp/obs-studio/build/plugins/image-source && /usr/bin/cmake -E copy_directory /home/md/pp/obs-studio/plugins/image-source/data /home/md/pp/obs-studio/build/rundir/RelWithDebInfo/data/obs-plugins/image-source

# Rule to build all files generated by this target.
plugins/image-source/CMakeFiles/image-source.dir/build: plugins/image-source/image-source.so

.PHONY : plugins/image-source/CMakeFiles/image-source.dir/build

plugins/image-source/CMakeFiles/image-source.dir/requires: plugins/image-source/CMakeFiles/image-source.dir/image-source.c.o.requires
plugins/image-source/CMakeFiles/image-source.dir/requires: plugins/image-source/CMakeFiles/image-source.dir/color-source.c.o.requires
plugins/image-source/CMakeFiles/image-source.dir/requires: plugins/image-source/CMakeFiles/image-source.dir/obs-slideshow.c.o.requires

.PHONY : plugins/image-source/CMakeFiles/image-source.dir/requires

plugins/image-source/CMakeFiles/image-source.dir/clean:
	cd /home/md/pp/obs-studio/build/plugins/image-source && $(CMAKE_COMMAND) -P CMakeFiles/image-source.dir/cmake_clean.cmake
.PHONY : plugins/image-source/CMakeFiles/image-source.dir/clean

plugins/image-source/CMakeFiles/image-source.dir/depend:
	cd /home/md/pp/obs-studio/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/md/pp/obs-studio /home/md/pp/obs-studio/plugins/image-source /home/md/pp/obs-studio/build /home/md/pp/obs-studio/build/plugins/image-source /home/md/pp/obs-studio/build/plugins/image-source/CMakeFiles/image-source.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/image-source/CMakeFiles/image-source.dir/depend
