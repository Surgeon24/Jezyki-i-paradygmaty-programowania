# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "D:\Programs\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programs\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Pet projects\Clion\Project_01"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Pet projects\Clion\Project_01\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/matrix_lib.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/matrix_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/matrix_lib.dir/flags.make

CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.obj: CMakeFiles/matrix_lib.dir/flags.make
CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.obj: ../matrixLib/matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Pet projects\Clion\Project_01\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\matrix_lib.dir\matrixLib\matrix.cpp.obj -c "D:\Pet projects\Clion\Project_01\matrixLib\matrix.cpp"

CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Pet projects\Clion\Project_01\matrixLib\matrix.cpp" > CMakeFiles\matrix_lib.dir\matrixLib\matrix.cpp.i

CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Pet projects\Clion\Project_01\matrixLib\matrix.cpp" -o CMakeFiles\matrix_lib.dir\matrixLib\matrix.cpp.s

# Object files for target matrix_lib
matrix_lib_OBJECTS = \
"CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.obj"

# External object files for target matrix_lib
matrix_lib_EXTERNAL_OBJECTS =

libmatrix_lib.a: CMakeFiles/matrix_lib.dir/matrixLib/matrix.cpp.obj
libmatrix_lib.a: CMakeFiles/matrix_lib.dir/build.make
libmatrix_lib.a: CMakeFiles/matrix_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Pet projects\Clion\Project_01\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmatrix_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles\matrix_lib.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\matrix_lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/matrix_lib.dir/build: libmatrix_lib.a
.PHONY : CMakeFiles/matrix_lib.dir/build

CMakeFiles/matrix_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\matrix_lib.dir\cmake_clean.cmake
.PHONY : CMakeFiles/matrix_lib.dir/clean

CMakeFiles/matrix_lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Pet projects\Clion\Project_01" "D:\Pet projects\Clion\Project_01" "D:\Pet projects\Clion\Project_01\cmake-build-debug" "D:\Pet projects\Clion\Project_01\cmake-build-debug" "D:\Pet projects\Clion\Project_01\cmake-build-debug\CMakeFiles\matrix_lib.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/matrix_lib.dir/depend

