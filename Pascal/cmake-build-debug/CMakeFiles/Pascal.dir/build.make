# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2017.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2017.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\b0kn0y\CLionProjects\Programs\Pascal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\b0kn0y\CLionProjects\Programs\Pascal\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pascal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pascal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pascal.dir/flags.make

CMakeFiles/Pascal.dir/main.cpp.obj: CMakeFiles/Pascal.dir/flags.make
CMakeFiles/Pascal.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\b0kn0y\CLionProjects\Programs\Pascal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pascal.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Pascal.dir\main.cpp.obj -c C:\Users\b0kn0y\CLionProjects\Programs\Pascal\main.cpp

CMakeFiles/Pascal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pascal.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\b0kn0y\CLionProjects\Programs\Pascal\main.cpp > CMakeFiles\Pascal.dir\main.cpp.i

CMakeFiles/Pascal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pascal.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\b0kn0y\CLionProjects\Programs\Pascal\main.cpp -o CMakeFiles\Pascal.dir\main.cpp.s

CMakeFiles/Pascal.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Pascal.dir/main.cpp.obj.requires

CMakeFiles/Pascal.dir/main.cpp.obj.provides: CMakeFiles/Pascal.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Pascal.dir\build.make CMakeFiles/Pascal.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Pascal.dir/main.cpp.obj.provides

CMakeFiles/Pascal.dir/main.cpp.obj.provides.build: CMakeFiles/Pascal.dir/main.cpp.obj


# Object files for target Pascal
Pascal_OBJECTS = \
"CMakeFiles/Pascal.dir/main.cpp.obj"

# External object files for target Pascal
Pascal_EXTERNAL_OBJECTS =

Pascal.exe: CMakeFiles/Pascal.dir/main.cpp.obj
Pascal.exe: CMakeFiles/Pascal.dir/build.make
Pascal.exe: CMakeFiles/Pascal.dir/linklibs.rsp
Pascal.exe: CMakeFiles/Pascal.dir/objects1.rsp
Pascal.exe: CMakeFiles/Pascal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\b0kn0y\CLionProjects\Programs\Pascal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Pascal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Pascal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pascal.dir/build: Pascal.exe

.PHONY : CMakeFiles/Pascal.dir/build

CMakeFiles/Pascal.dir/requires: CMakeFiles/Pascal.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Pascal.dir/requires

CMakeFiles/Pascal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Pascal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Pascal.dir/clean

CMakeFiles/Pascal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\b0kn0y\CLionProjects\Programs\Pascal C:\Users\b0kn0y\CLionProjects\Programs\Pascal C:\Users\b0kn0y\CLionProjects\Programs\Pascal\cmake-build-debug C:\Users\b0kn0y\CLionProjects\Programs\Pascal\cmake-build-debug C:\Users\b0kn0y\CLionProjects\Programs\Pascal\cmake-build-debug\CMakeFiles\Pascal.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pascal.dir/depend
