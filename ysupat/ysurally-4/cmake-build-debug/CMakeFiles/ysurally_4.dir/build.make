# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\App\Clion\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\App\Clion\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\14456\Desktop\ysupat\ysurally-4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\14456\Desktop\ysupat\ysurally-4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ysurally_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ysurally_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ysurally_4.dir/flags.make

CMakeFiles/ysurally_4.dir/7-9.cpp.obj: CMakeFiles/ysurally_4.dir/flags.make
CMakeFiles/ysurally_4.dir/7-9.cpp.obj: ../7-9.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\14456\Desktop\ysupat\ysurally-4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ysurally_4.dir/7-9.cpp.obj"
	C:\App\MingW64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ysurally_4.dir\7-9.cpp.obj -c C:\Users\14456\Desktop\ysupat\ysurally-4\7-9.cpp

CMakeFiles/ysurally_4.dir/7-9.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ysurally_4.dir/7-9.cpp.i"
	C:\App\MingW64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\14456\Desktop\ysupat\ysurally-4\7-9.cpp > CMakeFiles\ysurally_4.dir\7-9.cpp.i

CMakeFiles/ysurally_4.dir/7-9.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ysurally_4.dir/7-9.cpp.s"
	C:\App\MingW64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\14456\Desktop\ysupat\ysurally-4\7-9.cpp -o CMakeFiles\ysurally_4.dir\7-9.cpp.s

# Object files for target ysurally_4
ysurally_4_OBJECTS = \
"CMakeFiles/ysurally_4.dir/7-9.cpp.obj"

# External object files for target ysurally_4
ysurally_4_EXTERNAL_OBJECTS =

ysurally_4.exe: CMakeFiles/ysurally_4.dir/7-9.cpp.obj
ysurally_4.exe: CMakeFiles/ysurally_4.dir/build.make
ysurally_4.exe: CMakeFiles/ysurally_4.dir/linklibs.rsp
ysurally_4.exe: CMakeFiles/ysurally_4.dir/objects1.rsp
ysurally_4.exe: CMakeFiles/ysurally_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\14456\Desktop\ysupat\ysurally-4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ysurally_4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ysurally_4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ysurally_4.dir/build: ysurally_4.exe

.PHONY : CMakeFiles/ysurally_4.dir/build

CMakeFiles/ysurally_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ysurally_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ysurally_4.dir/clean

CMakeFiles/ysurally_4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\14456\Desktop\ysupat\ysurally-4 C:\Users\14456\Desktop\ysupat\ysurally-4 C:\Users\14456\Desktop\ysupat\ysurally-4\cmake-build-debug C:\Users\14456\Desktop\ysupat\ysurally-4\cmake-build-debug C:\Users\14456\Desktop\ysupat\ysurally-4\cmake-build-debug\CMakeFiles\ysurally_4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ysurally_4.dir/depend

