# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\arnab\CLionProjects\Algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\arnab\CLionProjects\Algorithm\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lcs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lcs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lcs.dir/flags.make

CMakeFiles/lcs.dir/lcs.c.obj: CMakeFiles/lcs.dir/flags.make
CMakeFiles/lcs.dir/lcs.c.obj: ../lcs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\arnab\CLionProjects\Algorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lcs.dir/lcs.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lcs.dir\lcs.c.obj -c C:\Users\arnab\CLionProjects\Algorithm\lcs.c

CMakeFiles/lcs.dir/lcs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lcs.dir/lcs.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\arnab\CLionProjects\Algorithm\lcs.c > CMakeFiles\lcs.dir\lcs.c.i

CMakeFiles/lcs.dir/lcs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lcs.dir/lcs.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\arnab\CLionProjects\Algorithm\lcs.c -o CMakeFiles\lcs.dir\lcs.c.s

# Object files for target lcs
lcs_OBJECTS = \
"CMakeFiles/lcs.dir/lcs.c.obj"

# External object files for target lcs
lcs_EXTERNAL_OBJECTS =

lcs.exe: CMakeFiles/lcs.dir/lcs.c.obj
lcs.exe: CMakeFiles/lcs.dir/build.make
lcs.exe: CMakeFiles/lcs.dir/linklibs.rsp
lcs.exe: CMakeFiles/lcs.dir/objects1.rsp
lcs.exe: CMakeFiles/lcs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\arnab\CLionProjects\Algorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lcs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lcs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lcs.dir/build: lcs.exe

.PHONY : CMakeFiles/lcs.dir/build

CMakeFiles/lcs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lcs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lcs.dir/clean

CMakeFiles/lcs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\arnab\CLionProjects\Algorithm C:\Users\arnab\CLionProjects\Algorithm C:\Users\arnab\CLionProjects\Algorithm\cmake-build-debug C:\Users\arnab\CLionProjects\Algorithm\cmake-build-debug C:\Users\arnab\CLionProjects\Algorithm\cmake-build-debug\CMakeFiles\lcs.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lcs.dir/depend

