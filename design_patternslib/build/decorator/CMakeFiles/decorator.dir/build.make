# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build

# Include any dependencies generated for this target.
include decorator/CMakeFiles/decorator.dir/depend.make

# Include the progress variables for this target.
include decorator/CMakeFiles/decorator.dir/progress.make

# Include the compile flags for this target's objects.
include decorator/CMakeFiles/decorator.dir/flags.make

decorator/CMakeFiles/decorator.dir/Beverage.cpp.o: decorator/CMakeFiles/decorator.dir/flags.make
decorator/CMakeFiles/decorator.dir/Beverage.cpp.o: ../decorator/Beverage.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object decorator/CMakeFiles/decorator.dir/Beverage.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/decorator.dir/Beverage.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Beverage.cpp

decorator/CMakeFiles/decorator.dir/Beverage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/decorator.dir/Beverage.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Beverage.cpp > CMakeFiles/decorator.dir/Beverage.cpp.i

decorator/CMakeFiles/decorator.dir/Beverage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/decorator.dir/Beverage.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Beverage.cpp -o CMakeFiles/decorator.dir/Beverage.cpp.s

decorator/CMakeFiles/decorator.dir/Beverage.cpp.o.requires:
.PHONY : decorator/CMakeFiles/decorator.dir/Beverage.cpp.o.requires

decorator/CMakeFiles/decorator.dir/Beverage.cpp.o.provides: decorator/CMakeFiles/decorator.dir/Beverage.cpp.o.requires
	$(MAKE) -f decorator/CMakeFiles/decorator.dir/build.make decorator/CMakeFiles/decorator.dir/Beverage.cpp.o.provides.build
.PHONY : decorator/CMakeFiles/decorator.dir/Beverage.cpp.o.provides

decorator/CMakeFiles/decorator.dir/Beverage.cpp.o.provides.build: decorator/CMakeFiles/decorator.dir/Beverage.cpp.o

decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o: decorator/CMakeFiles/decorator.dir/flags.make
decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o: ../decorator/HouseBlend.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/decorator.dir/HouseBlend.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/HouseBlend.cpp

decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/decorator.dir/HouseBlend.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/HouseBlend.cpp > CMakeFiles/decorator.dir/HouseBlend.cpp.i

decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/decorator.dir/HouseBlend.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/HouseBlend.cpp -o CMakeFiles/decorator.dir/HouseBlend.cpp.s

decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o.requires:
.PHONY : decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o.requires

decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o.provides: decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o.requires
	$(MAKE) -f decorator/CMakeFiles/decorator.dir/build.make decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o.provides.build
.PHONY : decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o.provides

decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o.provides.build: decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o

decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o: decorator/CMakeFiles/decorator.dir/flags.make
decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o: ../decorator/DarkRoast.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/decorator.dir/DarkRoast.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/DarkRoast.cpp

decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/decorator.dir/DarkRoast.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/DarkRoast.cpp > CMakeFiles/decorator.dir/DarkRoast.cpp.i

decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/decorator.dir/DarkRoast.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/DarkRoast.cpp -o CMakeFiles/decorator.dir/DarkRoast.cpp.s

decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o.requires:
.PHONY : decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o.requires

decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o.provides: decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o.requires
	$(MAKE) -f decorator/CMakeFiles/decorator.dir/build.make decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o.provides.build
.PHONY : decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o.provides

decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o.provides.build: decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o

decorator/CMakeFiles/decorator.dir/Decaf.cpp.o: decorator/CMakeFiles/decorator.dir/flags.make
decorator/CMakeFiles/decorator.dir/Decaf.cpp.o: ../decorator/Decaf.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object decorator/CMakeFiles/decorator.dir/Decaf.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/decorator.dir/Decaf.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Decaf.cpp

decorator/CMakeFiles/decorator.dir/Decaf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/decorator.dir/Decaf.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Decaf.cpp > CMakeFiles/decorator.dir/Decaf.cpp.i

decorator/CMakeFiles/decorator.dir/Decaf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/decorator.dir/Decaf.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Decaf.cpp -o CMakeFiles/decorator.dir/Decaf.cpp.s

decorator/CMakeFiles/decorator.dir/Decaf.cpp.o.requires:
.PHONY : decorator/CMakeFiles/decorator.dir/Decaf.cpp.o.requires

decorator/CMakeFiles/decorator.dir/Decaf.cpp.o.provides: decorator/CMakeFiles/decorator.dir/Decaf.cpp.o.requires
	$(MAKE) -f decorator/CMakeFiles/decorator.dir/build.make decorator/CMakeFiles/decorator.dir/Decaf.cpp.o.provides.build
.PHONY : decorator/CMakeFiles/decorator.dir/Decaf.cpp.o.provides

decorator/CMakeFiles/decorator.dir/Decaf.cpp.o.provides.build: decorator/CMakeFiles/decorator.dir/Decaf.cpp.o

decorator/CMakeFiles/decorator.dir/Espresso.cpp.o: decorator/CMakeFiles/decorator.dir/flags.make
decorator/CMakeFiles/decorator.dir/Espresso.cpp.o: ../decorator/Espresso.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object decorator/CMakeFiles/decorator.dir/Espresso.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/decorator.dir/Espresso.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Espresso.cpp

decorator/CMakeFiles/decorator.dir/Espresso.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/decorator.dir/Espresso.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Espresso.cpp > CMakeFiles/decorator.dir/Espresso.cpp.i

decorator/CMakeFiles/decorator.dir/Espresso.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/decorator.dir/Espresso.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator/Espresso.cpp -o CMakeFiles/decorator.dir/Espresso.cpp.s

decorator/CMakeFiles/decorator.dir/Espresso.cpp.o.requires:
.PHONY : decorator/CMakeFiles/decorator.dir/Espresso.cpp.o.requires

decorator/CMakeFiles/decorator.dir/Espresso.cpp.o.provides: decorator/CMakeFiles/decorator.dir/Espresso.cpp.o.requires
	$(MAKE) -f decorator/CMakeFiles/decorator.dir/build.make decorator/CMakeFiles/decorator.dir/Espresso.cpp.o.provides.build
.PHONY : decorator/CMakeFiles/decorator.dir/Espresso.cpp.o.provides

decorator/CMakeFiles/decorator.dir/Espresso.cpp.o.provides.build: decorator/CMakeFiles/decorator.dir/Espresso.cpp.o

# Object files for target decorator
decorator_OBJECTS = \
"CMakeFiles/decorator.dir/Beverage.cpp.o" \
"CMakeFiles/decorator.dir/HouseBlend.cpp.o" \
"CMakeFiles/decorator.dir/DarkRoast.cpp.o" \
"CMakeFiles/decorator.dir/Decaf.cpp.o" \
"CMakeFiles/decorator.dir/Espresso.cpp.o"

# External object files for target decorator
decorator_EXTERNAL_OBJECTS =

decorator/libdecorator.a: decorator/CMakeFiles/decorator.dir/Beverage.cpp.o
decorator/libdecorator.a: decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o
decorator/libdecorator.a: decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o
decorator/libdecorator.a: decorator/CMakeFiles/decorator.dir/Decaf.cpp.o
decorator/libdecorator.a: decorator/CMakeFiles/decorator.dir/Espresso.cpp.o
decorator/libdecorator.a: decorator/CMakeFiles/decorator.dir/build.make
decorator/libdecorator.a: decorator/CMakeFiles/decorator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libdecorator.a"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && $(CMAKE_COMMAND) -P CMakeFiles/decorator.dir/cmake_clean_target.cmake
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/decorator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
decorator/CMakeFiles/decorator.dir/build: decorator/libdecorator.a
.PHONY : decorator/CMakeFiles/decorator.dir/build

decorator/CMakeFiles/decorator.dir/requires: decorator/CMakeFiles/decorator.dir/Beverage.cpp.o.requires
decorator/CMakeFiles/decorator.dir/requires: decorator/CMakeFiles/decorator.dir/HouseBlend.cpp.o.requires
decorator/CMakeFiles/decorator.dir/requires: decorator/CMakeFiles/decorator.dir/DarkRoast.cpp.o.requires
decorator/CMakeFiles/decorator.dir/requires: decorator/CMakeFiles/decorator.dir/Decaf.cpp.o.requires
decorator/CMakeFiles/decorator.dir/requires: decorator/CMakeFiles/decorator.dir/Espresso.cpp.o.requires
.PHONY : decorator/CMakeFiles/decorator.dir/requires

decorator/CMakeFiles/decorator.dir/clean:
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator && $(CMAKE_COMMAND) -P CMakeFiles/decorator.dir/cmake_clean.cmake
.PHONY : decorator/CMakeFiles/decorator.dir/clean

decorator/CMakeFiles/decorator.dir/depend:
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/decorator /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/decorator/CMakeFiles/decorator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : decorator/CMakeFiles/decorator.dir/depend

