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
include factory/CMakeFiles/factory.dir/depend.make

# Include the progress variables for this target.
include factory/CMakeFiles/factory.dir/progress.make

# Include the compile flags for this target's objects.
include factory/CMakeFiles/factory.dir/flags.make

factory/CMakeFiles/factory.dir/Factory.cpp.o: factory/CMakeFiles/factory.dir/flags.make
factory/CMakeFiles/factory.dir/Factory.cpp.o: ../factory/Factory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object factory/CMakeFiles/factory.dir/Factory.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/factory.dir/Factory.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/Factory.cpp

factory/CMakeFiles/factory.dir/Factory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/factory.dir/Factory.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/Factory.cpp > CMakeFiles/factory.dir/Factory.cpp.i

factory/CMakeFiles/factory.dir/Factory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/factory.dir/Factory.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/Factory.cpp -o CMakeFiles/factory.dir/Factory.cpp.s

factory/CMakeFiles/factory.dir/Factory.cpp.o.requires:
.PHONY : factory/CMakeFiles/factory.dir/Factory.cpp.o.requires

factory/CMakeFiles/factory.dir/Factory.cpp.o.provides: factory/CMakeFiles/factory.dir/Factory.cpp.o.requires
	$(MAKE) -f factory/CMakeFiles/factory.dir/build.make factory/CMakeFiles/factory.dir/Factory.cpp.o.provides.build
.PHONY : factory/CMakeFiles/factory.dir/Factory.cpp.o.provides

factory/CMakeFiles/factory.dir/Factory.cpp.o.provides.build: factory/CMakeFiles/factory.dir/Factory.cpp.o

factory/CMakeFiles/factory.dir/Pizza.cpp.o: factory/CMakeFiles/factory.dir/flags.make
factory/CMakeFiles/factory.dir/Pizza.cpp.o: ../factory/Pizza.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object factory/CMakeFiles/factory.dir/Pizza.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/factory.dir/Pizza.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/Pizza.cpp

factory/CMakeFiles/factory.dir/Pizza.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/factory.dir/Pizza.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/Pizza.cpp > CMakeFiles/factory.dir/Pizza.cpp.i

factory/CMakeFiles/factory.dir/Pizza.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/factory.dir/Pizza.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/Pizza.cpp -o CMakeFiles/factory.dir/Pizza.cpp.s

factory/CMakeFiles/factory.dir/Pizza.cpp.o.requires:
.PHONY : factory/CMakeFiles/factory.dir/Pizza.cpp.o.requires

factory/CMakeFiles/factory.dir/Pizza.cpp.o.provides: factory/CMakeFiles/factory.dir/Pizza.cpp.o.requires
	$(MAKE) -f factory/CMakeFiles/factory.dir/build.make factory/CMakeFiles/factory.dir/Pizza.cpp.o.provides.build
.PHONY : factory/CMakeFiles/factory.dir/Pizza.cpp.o.provides

factory/CMakeFiles/factory.dir/Pizza.cpp.o.provides.build: factory/CMakeFiles/factory.dir/Pizza.cpp.o

factory/CMakeFiles/factory.dir/CheezePizza.cpp.o: factory/CMakeFiles/factory.dir/flags.make
factory/CMakeFiles/factory.dir/CheezePizza.cpp.o: ../factory/CheezePizza.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object factory/CMakeFiles/factory.dir/CheezePizza.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/factory.dir/CheezePizza.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/CheezePizza.cpp

factory/CMakeFiles/factory.dir/CheezePizza.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/factory.dir/CheezePizza.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/CheezePizza.cpp > CMakeFiles/factory.dir/CheezePizza.cpp.i

factory/CMakeFiles/factory.dir/CheezePizza.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/factory.dir/CheezePizza.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/CheezePizza.cpp -o CMakeFiles/factory.dir/CheezePizza.cpp.s

factory/CMakeFiles/factory.dir/CheezePizza.cpp.o.requires:
.PHONY : factory/CMakeFiles/factory.dir/CheezePizza.cpp.o.requires

factory/CMakeFiles/factory.dir/CheezePizza.cpp.o.provides: factory/CMakeFiles/factory.dir/CheezePizza.cpp.o.requires
	$(MAKE) -f factory/CMakeFiles/factory.dir/build.make factory/CMakeFiles/factory.dir/CheezePizza.cpp.o.provides.build
.PHONY : factory/CMakeFiles/factory.dir/CheezePizza.cpp.o.provides

factory/CMakeFiles/factory.dir/CheezePizza.cpp.o.provides.build: factory/CMakeFiles/factory.dir/CheezePizza.cpp.o

factory/CMakeFiles/factory.dir/pizzashop.cpp.o: factory/CMakeFiles/factory.dir/flags.make
factory/CMakeFiles/factory.dir/pizzashop.cpp.o: ../factory/pizzashop.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object factory/CMakeFiles/factory.dir/pizzashop.cpp.o"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/factory.dir/pizzashop.cpp.o -c /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/pizzashop.cpp

factory/CMakeFiles/factory.dir/pizzashop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/factory.dir/pizzashop.cpp.i"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/pizzashop.cpp > CMakeFiles/factory.dir/pizzashop.cpp.i

factory/CMakeFiles/factory.dir/pizzashop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/factory.dir/pizzashop.cpp.s"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory/pizzashop.cpp -o CMakeFiles/factory.dir/pizzashop.cpp.s

factory/CMakeFiles/factory.dir/pizzashop.cpp.o.requires:
.PHONY : factory/CMakeFiles/factory.dir/pizzashop.cpp.o.requires

factory/CMakeFiles/factory.dir/pizzashop.cpp.o.provides: factory/CMakeFiles/factory.dir/pizzashop.cpp.o.requires
	$(MAKE) -f factory/CMakeFiles/factory.dir/build.make factory/CMakeFiles/factory.dir/pizzashop.cpp.o.provides.build
.PHONY : factory/CMakeFiles/factory.dir/pizzashop.cpp.o.provides

factory/CMakeFiles/factory.dir/pizzashop.cpp.o.provides.build: factory/CMakeFiles/factory.dir/pizzashop.cpp.o

# Object files for target factory
factory_OBJECTS = \
"CMakeFiles/factory.dir/Factory.cpp.o" \
"CMakeFiles/factory.dir/Pizza.cpp.o" \
"CMakeFiles/factory.dir/CheezePizza.cpp.o" \
"CMakeFiles/factory.dir/pizzashop.cpp.o"

# External object files for target factory
factory_EXTERNAL_OBJECTS =

factory/libfactory.a: factory/CMakeFiles/factory.dir/Factory.cpp.o
factory/libfactory.a: factory/CMakeFiles/factory.dir/Pizza.cpp.o
factory/libfactory.a: factory/CMakeFiles/factory.dir/CheezePizza.cpp.o
factory/libfactory.a: factory/CMakeFiles/factory.dir/pizzashop.cpp.o
factory/libfactory.a: factory/CMakeFiles/factory.dir/build.make
factory/libfactory.a: factory/CMakeFiles/factory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libfactory.a"
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && $(CMAKE_COMMAND) -P CMakeFiles/factory.dir/cmake_clean_target.cmake
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/factory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
factory/CMakeFiles/factory.dir/build: factory/libfactory.a
.PHONY : factory/CMakeFiles/factory.dir/build

factory/CMakeFiles/factory.dir/requires: factory/CMakeFiles/factory.dir/Factory.cpp.o.requires
factory/CMakeFiles/factory.dir/requires: factory/CMakeFiles/factory.dir/Pizza.cpp.o.requires
factory/CMakeFiles/factory.dir/requires: factory/CMakeFiles/factory.dir/CheezePizza.cpp.o.requires
factory/CMakeFiles/factory.dir/requires: factory/CMakeFiles/factory.dir/pizzashop.cpp.o.requires
.PHONY : factory/CMakeFiles/factory.dir/requires

factory/CMakeFiles/factory.dir/clean:
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory && $(CMAKE_COMMAND) -P CMakeFiles/factory.dir/cmake_clean.cmake
.PHONY : factory/CMakeFiles/factory.dir/clean

factory/CMakeFiles/factory.dir/depend:
	cd /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/factory /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory /home/ubsafder/temp/dojo/joggingthecpppath/design_patternslib/build/factory/CMakeFiles/factory.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : factory/CMakeFiles/factory.dir/depend

