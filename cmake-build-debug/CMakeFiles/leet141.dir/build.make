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
include CMakeFiles/leet141.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leet141.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leet141.dir/flags.make

CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.o: CMakeFiles/leet141.dir/flags.make
CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.o: ../leetcode/leetcode141.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.o -c /Users/shaojun/CLionProjects/cppPrimer/leetcode/leetcode141.cpp

CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaojun/CLionProjects/cppPrimer/leetcode/leetcode141.cpp > CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.i

CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaojun/CLionProjects/cppPrimer/leetcode/leetcode141.cpp -o CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.s

# Object files for target leet141
leet141_OBJECTS = \
"CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.o"

# External object files for target leet141
leet141_EXTERNAL_OBJECTS =

leet141: CMakeFiles/leet141.dir/leetcode/leetcode141.cpp.o
leet141: CMakeFiles/leet141.dir/build.make
leet141: CMakeFiles/leet141.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leet141"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leet141.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leet141.dir/build: leet141

.PHONY : CMakeFiles/leet141.dir/build

CMakeFiles/leet141.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leet141.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leet141.dir/clean

CMakeFiles/leet141.dir/depend:
	cd /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shaojun/CLionProjects/cppPrimer /Users/shaojun/CLionProjects/cppPrimer /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles/leet141.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leet141.dir/depend

