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
CMAKE_COMMAND = "/Users/umutakkaya/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/umutakkaya/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.6397.106/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/umutakkaya/Projects/Damla

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/umutakkaya/Projects/Damla/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/library.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/umutakkaya/Projects/Damla/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled.dir/library.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/library.cpp.o -c /Users/umutakkaya/Projects/Damla/library.cpp

CMakeFiles/untitled.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/library.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/umutakkaya/Projects/Damla/library.cpp > CMakeFiles/untitled.dir/library.cpp.i

CMakeFiles/untitled.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/library.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/umutakkaya/Projects/Damla/library.cpp -o CMakeFiles/untitled.dir/library.cpp.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/library.cpp.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled: CMakeFiles/untitled.dir/library.cpp.o
untitled: CMakeFiles/untitled.dir/build.make
untitled: /usr/local/lib/libopencv_highgui.4.4.0.dylib
untitled: /usr/local/lib/libopencv_videoio.4.4.0.dylib
untitled: /usr/local/lib/libopencv_imgcodecs.4.4.0.dylib
untitled: /usr/local/lib/libopencv_imgproc.4.4.0.dylib
untitled: /usr/local/lib/libopencv_core.4.4.0.dylib
untitled: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/umutakkaya/Projects/Damla/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable untitled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled

.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	cd /Users/umutakkaya/Projects/Damla/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/umutakkaya/Projects/Damla /Users/umutakkaya/Projects/Damla /Users/umutakkaya/Projects/Damla/cmake-build-debug /Users/umutakkaya/Projects/Damla/cmake-build-debug /Users/umutakkaya/Projects/Damla/cmake-build-debug/CMakeFiles/untitled.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend

