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
include CMakeFiles/cpp_tvfm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp_tvfm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_tvfm.dir/flags.make

CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.o: CMakeFiles/cpp_tvfm.dir/flags.make
CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.o: ../cpp/tvfmMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.o -c /Users/shaojun/CLionProjects/cppPrimer/cpp/tvfmMain.cpp

CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaojun/CLionProjects/cppPrimer/cpp/tvfmMain.cpp > CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.i

CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaojun/CLionProjects/cppPrimer/cpp/tvfmMain.cpp -o CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.s

# Object files for target cpp_tvfm
cpp_tvfm_OBJECTS = \
"CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.o"

# External object files for target cpp_tvfm
cpp_tvfm_EXTERNAL_OBJECTS =

cpp_tvfm: CMakeFiles/cpp_tvfm.dir/cpp/tvfmMain.cpp.o
cpp_tvfm: CMakeFiles/cpp_tvfm.dir/build.make
cpp_tvfm: CMakeFiles/cpp_tvfm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp_tvfm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_tvfm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_tvfm.dir/build: cpp_tvfm

.PHONY : CMakeFiles/cpp_tvfm.dir/build

CMakeFiles/cpp_tvfm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_tvfm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp_tvfm.dir/clean

CMakeFiles/cpp_tvfm.dir/depend:
	cd /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shaojun/CLionProjects/cppPrimer /Users/shaojun/CLionProjects/cppPrimer /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug /Users/shaojun/CLionProjects/cppPrimer/cmake-build-debug/CMakeFiles/cpp_tvfm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp_tvfm.dir/depend

