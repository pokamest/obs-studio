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
include plugins/obs-transitions/CMakeFiles/obs-transitions.dir/depend.make

# Include the progress variables for this target.
include plugins/obs-transitions/CMakeFiles/obs-transitions.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o: ../plugins/obs-transitions/obs-transitions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/obs-transitions.dir/obs-transitions.c.o   -c /home/md/pp/obs-studio/plugins/obs-transitions/obs-transitions.c

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obs-transitions.dir/obs-transitions.c.i"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/obs-transitions/obs-transitions.c > CMakeFiles/obs-transitions.dir/obs-transitions.c.i

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obs-transitions.dir/obs-transitions.c.s"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/obs-transitions/obs-transitions.c -o CMakeFiles/obs-transitions.dir/obs-transitions.c.s

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o.requires:

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o.requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o.provides: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o.requires
	$(MAKE) -f plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o.provides.build
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o.provides

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o.provides.build: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o


plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o: ../plugins/obs-transitions/transition-slide.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/obs-transitions.dir/transition-slide.c.o   -c /home/md/pp/obs-studio/plugins/obs-transitions/transition-slide.c

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obs-transitions.dir/transition-slide.c.i"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/obs-transitions/transition-slide.c > CMakeFiles/obs-transitions.dir/transition-slide.c.i

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obs-transitions.dir/transition-slide.c.s"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/obs-transitions/transition-slide.c -o CMakeFiles/obs-transitions.dir/transition-slide.c.s

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o.requires:

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o.requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o.provides: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o.requires
	$(MAKE) -f plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o.provides.build
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o.provides

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o.provides.build: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o


plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o: ../plugins/obs-transitions/transition-swipe.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/obs-transitions.dir/transition-swipe.c.o   -c /home/md/pp/obs-studio/plugins/obs-transitions/transition-swipe.c

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obs-transitions.dir/transition-swipe.c.i"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/obs-transitions/transition-swipe.c > CMakeFiles/obs-transitions.dir/transition-swipe.c.i

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obs-transitions.dir/transition-swipe.c.s"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/obs-transitions/transition-swipe.c -o CMakeFiles/obs-transitions.dir/transition-swipe.c.s

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o.requires:

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o.requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o.provides: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o.requires
	$(MAKE) -f plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o.provides.build
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o.provides

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o.provides.build: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o


plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o: ../plugins/obs-transitions/transition-fade.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/obs-transitions.dir/transition-fade.c.o   -c /home/md/pp/obs-studio/plugins/obs-transitions/transition-fade.c

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obs-transitions.dir/transition-fade.c.i"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/obs-transitions/transition-fade.c > CMakeFiles/obs-transitions.dir/transition-fade.c.i

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obs-transitions.dir/transition-fade.c.s"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/obs-transitions/transition-fade.c -o CMakeFiles/obs-transitions.dir/transition-fade.c.s

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o.requires:

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o.requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o.provides: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o.requires
	$(MAKE) -f plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o.provides.build
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o.provides

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o.provides.build: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o


plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o: ../plugins/obs-transitions/transition-cut.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/obs-transitions.dir/transition-cut.c.o   -c /home/md/pp/obs-studio/plugins/obs-transitions/transition-cut.c

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obs-transitions.dir/transition-cut.c.i"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/obs-transitions/transition-cut.c > CMakeFiles/obs-transitions.dir/transition-cut.c.i

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obs-transitions.dir/transition-cut.c.s"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/obs-transitions/transition-cut.c -o CMakeFiles/obs-transitions.dir/transition-cut.c.s

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o.requires:

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o.requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o.provides: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o.requires
	$(MAKE) -f plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o.provides.build
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o.provides

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o.provides.build: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o


plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o: ../plugins/obs-transitions/transition-fade-to-color.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o   -c /home/md/pp/obs-studio/plugins/obs-transitions/transition-fade-to-color.c

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.i"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/obs-transitions/transition-fade-to-color.c > CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.i

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.s"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/obs-transitions/transition-fade-to-color.c -o CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.s

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o.requires:

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o.requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o.provides: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o.requires
	$(MAKE) -f plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o.provides.build
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o.provides

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o.provides.build: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o


plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o: ../plugins/obs-transitions/transition-luma-wipe.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o   -c /home/md/pp/obs-studio/plugins/obs-transitions/transition-luma-wipe.c

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.i"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/obs-transitions/transition-luma-wipe.c > CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.i

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.s"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/obs-transitions/transition-luma-wipe.c -o CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.s

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o.requires:

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o.requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o.provides: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o.requires
	$(MAKE) -f plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o.provides.build
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o.provides

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o.provides.build: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o


plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/flags.make
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o: ../plugins/obs-transitions/transition-stinger.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/obs-transitions.dir/transition-stinger.c.o   -c /home/md/pp/obs-studio/plugins/obs-transitions/transition-stinger.c

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/obs-transitions.dir/transition-stinger.c.i"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/md/pp/obs-studio/plugins/obs-transitions/transition-stinger.c > CMakeFiles/obs-transitions.dir/transition-stinger.c.i

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/obs-transitions.dir/transition-stinger.c.s"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/md/pp/obs-studio/plugins/obs-transitions/transition-stinger.c -o CMakeFiles/obs-transitions.dir/transition-stinger.c.s

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o.requires:

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o.requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o.provides: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o.requires
	$(MAKE) -f plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o.provides.build
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o.provides

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o.provides.build: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o


# Object files for target obs-transitions
obs__transitions_OBJECTS = \
"CMakeFiles/obs-transitions.dir/obs-transitions.c.o" \
"CMakeFiles/obs-transitions.dir/transition-slide.c.o" \
"CMakeFiles/obs-transitions.dir/transition-swipe.c.o" \
"CMakeFiles/obs-transitions.dir/transition-fade.c.o" \
"CMakeFiles/obs-transitions.dir/transition-cut.c.o" \
"CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o" \
"CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o" \
"CMakeFiles/obs-transitions.dir/transition-stinger.c.o"

# External object files for target obs-transitions
obs__transitions_EXTERNAL_OBJECTS =

plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build.make
plugins/obs-transitions/obs-transitions.so: libobs/libobs.so.0
plugins/obs-transitions/obs-transitions.so: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/md/pp/obs-studio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C shared module obs-transitions.so"
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/obs-transitions.dir/link.txt --verbose=$(VERBOSE)
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cmake -E copy /home/md/pp/obs-studio/build/plugins/obs-transitions/obs-transitions.so /home/md/pp/obs-studio/build/rundir/RelWithDebInfo/obs-plugins/64bit/obs-transitions.so
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && /usr/bin/cmake -E copy_directory /home/md/pp/obs-studio/plugins/obs-transitions/data /home/md/pp/obs-studio/build/rundir/RelWithDebInfo/data/obs-plugins/obs-transitions

# Rule to build all files generated by this target.
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build: plugins/obs-transitions/obs-transitions.so

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/build

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/obs-transitions.c.o.requires
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-slide.c.o.requires
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-swipe.c.o.requires
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade.c.o.requires
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-cut.c.o.requires
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-fade-to-color.c.o.requires
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-luma-wipe.c.o.requires
plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires: plugins/obs-transitions/CMakeFiles/obs-transitions.dir/transition-stinger.c.o.requires

.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/requires

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/clean:
	cd /home/md/pp/obs-studio/build/plugins/obs-transitions && $(CMAKE_COMMAND) -P CMakeFiles/obs-transitions.dir/cmake_clean.cmake
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/clean

plugins/obs-transitions/CMakeFiles/obs-transitions.dir/depend:
	cd /home/md/pp/obs-studio/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/md/pp/obs-studio /home/md/pp/obs-studio/plugins/obs-transitions /home/md/pp/obs-studio/build /home/md/pp/obs-studio/build/plugins/obs-transitions /home/md/pp/obs-studio/build/plugins/obs-transitions/CMakeFiles/obs-transitions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/obs-transitions/CMakeFiles/obs-transitions.dir/depend
