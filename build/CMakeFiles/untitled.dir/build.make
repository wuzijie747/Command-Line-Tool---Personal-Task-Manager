# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = D:/Qt/Tools/CMake_64/bin/cmake.exe

# The command to remove a file.
RM = D:/Qt/Tools/CMake_64/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:/Users/wuzijie/CLionProjects/untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:/Users/wuzijie/CLionProjects/untitled/build

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/untitled.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/main.cpp.obj: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/main.cpp.obj: CMakeFiles/untitled.dir/includes_CXX.rsp
CMakeFiles/untitled.dir/main.cpp.obj: D:/Users/wuzijie/CLionProjects/untitled/main.cpp
CMakeFiles/untitled.dir/main.cpp.obj: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:/Users/wuzijie/CLionProjects/untitled/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled.dir/main.cpp.obj"
	D:/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/main.cpp.obj -MF CMakeFiles/untitled.dir/main.cpp.obj.d -o CMakeFiles/untitled.dir/main.cpp.obj -c D:/Users/wuzijie/CLionProjects/untitled/main.cpp

CMakeFiles/untitled.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/main.cpp.i"
	D:/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:/Users/wuzijie/CLionProjects/untitled/main.cpp > CMakeFiles/untitled.dir/main.cpp.i

CMakeFiles/untitled.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/main.cpp.s"
	D:/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:/Users/wuzijie/CLionProjects/untitled/main.cpp -o CMakeFiles/untitled.dir/main.cpp.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/main.cpp.obj"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled.exe: CMakeFiles/untitled.dir/main.cpp.obj
untitled.exe: CMakeFiles/untitled.dir/build.make
untitled.exe: CMakeFiles/untitled.dir/linkLibs.rsp
untitled.exe: CMakeFiles/untitled.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:/Users/wuzijie/CLionProjects/untitled/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable untitled.exe"
	D:/Qt/Tools/CMake_64/bin/cmake.exe -E rm -f CMakeFiles/untitled.dir/objects.a
	D:/mingw64/bin/ar.exe qc CMakeFiles/untitled.dir/objects.a @CMakeFiles/untitled.dir/objects1.rsp
	D:/mingw64/bin/c++.exe -g -Wl,--whole-archive CMakeFiles/untitled.dir/objects.a -Wl,--no-whole-archive -o untitled.exe -Wl,--out-implib,libuntitled.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/untitled.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled.exe
.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" D:/Users/wuzijie/CLionProjects/untitled D:/Users/wuzijie/CLionProjects/untitled D:/Users/wuzijie/CLionProjects/untitled/build D:/Users/wuzijie/CLionProjects/untitled/build D:/Users/wuzijie/CLionProjects/untitled/build/CMakeFiles/untitled.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/untitled.dir/depend

