# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/shaojun/CLionProjects/cppPrimer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mianshi_5_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mianshi_5_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mianshi_5_4.dir/flags.make

CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.o: CMakeFiles/mianshi_5_4.dir/flags.make
CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.o: ../mianshi/mianshi_5_4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.o -c /Users/shaojun/CLionProjects/cppPrimer/mianshi/mianshi_5_4.cpp

CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaojun/CLionProjects/cppPrimer/mianshi/mianshi_5_4.cpp > CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.i

CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaojun/CLionProjects/cppPrimer/mianshi/mianshi_5_4.cpp -o CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.s

# Object files for target mianshi_5_4
mianshi_5_4_OBJECTS = \
"CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.o"

# External object files for target mianshi_5_4
mianshi_5_4_EXTERNAL_OBJECTS =

mianshi_5_4: CMakeFiles/mianshi_5_4.dir/mianshi/mianshi_5_4.cpp.o
mianshi_5_4: CMakeFiles/mianshi_5_4.dir/build.make
mianshi_5_4: CMakeFiles/mianshi_5_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mianshi_5_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mianshi_5_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mianshi_5_4.dir/build: mianshi_5_4

.PHONY : CMakeFiles/mianshi_5_4.dir/build

CMakeFiles/mianshi_5_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mianshi_5_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mianshi_5_4.dir/clean

CMakeFiles/mianshi_5_4.dir/depend:
	cd /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shaojun/CLionProjects/cppPrimer /Users/shaojun/CLionProjects/cppPrimer /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles/mianshi_5_4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mianshi_5_4.dir/depend

