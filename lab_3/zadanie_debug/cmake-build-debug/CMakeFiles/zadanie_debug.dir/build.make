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
CMAKE_SOURCE_DIR = "D:\Pet projects\Clion\lab_3\zadanie_debug"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Pet projects\Clion\lab_3\zadanie_debug\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/zadanie_debug.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/zadanie_debug.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zadanie_debug.dir/flags.make

CMakeFiles/zadanie_debug.dir/main.cpp.obj: CMakeFiles/zadanie_debug.dir/flags.make
CMakeFiles/zadanie_debug.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Pet projects\Clion\lab_3\zadanie_debug\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zadanie_debug.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\zadanie_debug.dir\main.cpp.obj -c "D:\Pet projects\Clion\lab_3\zadanie_debug\main.cpp"

CMakeFiles/zadanie_debug.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zadanie_debug.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Pet projects\Clion\lab_3\zadanie_debug\main.cpp" > CMakeFiles\zadanie_debug.dir\main.cpp.i

CMakeFiles/zadanie_debug.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zadanie_debug.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Pet projects\Clion\lab_3\zadanie_debug\main.cpp" -o CMakeFiles\zadanie_debug.dir\main.cpp.s

# Object files for target zadanie_debug
zadanie_debug_OBJECTS = \
"CMakeFiles/zadanie_debug.dir/main.cpp.obj"

# External object files for target zadanie_debug
zadanie_debug_EXTERNAL_OBJECTS =

zadanie_debug.exe: CMakeFiles/zadanie_debug.dir/main.cpp.obj
zadanie_debug.exe: CMakeFiles/zadanie_debug.dir/build.make
zadanie_debug.exe: CMakeFiles/zadanie_debug.dir/linklibs.rsp
zadanie_debug.exe: CMakeFiles/zadanie_debug.dir/objects1.rsp
zadanie_debug.exe: CMakeFiles/zadanie_debug.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Pet projects\Clion\lab_3\zadanie_debug\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zadanie_debug.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zadanie_debug.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zadanie_debug.dir/build: zadanie_debug.exe
.PHONY : CMakeFiles/zadanie_debug.dir/build

CMakeFiles/zadanie_debug.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zadanie_debug.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zadanie_debug.dir/clean

CMakeFiles/zadanie_debug.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Pet projects\Clion\lab_3\zadanie_debug" "D:\Pet projects\Clion\lab_3\zadanie_debug" "D:\Pet projects\Clion\lab_3\zadanie_debug\cmake-build-debug" "D:\Pet projects\Clion\lab_3\zadanie_debug\cmake-build-debug" "D:\Pet projects\Clion\lab_3\zadanie_debug\cmake-build-debug\CMakeFiles\zadanie_debug.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/zadanie_debug.dir/depend

