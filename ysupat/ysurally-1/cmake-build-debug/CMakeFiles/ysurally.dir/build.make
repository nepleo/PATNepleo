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
CMAKE_SOURCE_DIR = C:\Users\leo\Desktop\ysupat\ysurally-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\leo\Desktop\ysupat\ysurally-1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ysurally.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ysurally.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ysurally.dir/flags.make

CMakeFiles/ysurally.dir/main.cpp.obj: CMakeFiles/ysurally.dir/flags.make
CMakeFiles/ysurally.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\leo\Desktop\ysupat\ysurally-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ysurally.dir/main.cpp.obj"
	C:\App\MingW64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ysurally.dir\main.cpp.obj -c C:\Users\leo\Desktop\ysupat\ysurally-1\main.cpp

CMakeFiles/ysurally.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ysurally.dir/main.cpp.i"
	C:\App\MingW64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\leo\Desktop\ysupat\ysurally-1\main.cpp > CMakeFiles\ysurally.dir\main.cpp.i

CMakeFiles/ysurally.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ysurally.dir/main.cpp.s"
	C:\App\MingW64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\leo\Desktop\ysupat\ysurally-1\main.cpp -o CMakeFiles\ysurally.dir\main.cpp.s

# Object files for target ysurally
ysurally_OBJECTS = \
"CMakeFiles/ysurally.dir/main.cpp.obj"

# External object files for target ysurally
ysurally_EXTERNAL_OBJECTS =

ysurally.exe: CMakeFiles/ysurally.dir/main.cpp.obj
ysurally.exe: CMakeFiles/ysurally.dir/build.make
ysurally.exe: CMakeFiles/ysurally.dir/linklibs.rsp
ysurally.exe: CMakeFiles/ysurally.dir/objects1.rsp
ysurally.exe: CMakeFiles/ysurally.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\leo\Desktop\ysupat\ysurally-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ysurally.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ysurally.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ysurally.dir/build: ysurally.exe

.PHONY : CMakeFiles/ysurally.dir/build

CMakeFiles/ysurally.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ysurally.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ysurally.dir/clean

CMakeFiles/ysurally.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\leo\Desktop\ysupat\ysurally-1 C:\Users\leo\Desktop\ysupat\ysurally-1 C:\Users\leo\Desktop\ysupat\ysurally-1\cmake-build-debug C:\Users\leo\Desktop\ysupat\ysurally-1\cmake-build-debug C:\Users\leo\Desktop\ysupat\ysurally-1\cmake-build-debug\CMakeFiles\ysurally.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ysurally.dir/depend

