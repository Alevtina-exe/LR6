# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/darya/Документы/453502/ОАиП/LR6/Task_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default

# Include any dependencies generated for this target.
include CMakeFiles/Task_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Task_2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Task_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task_2.dir/flags.make

CMakeFiles/Task_2.dir/functions.cpp.o: CMakeFiles/Task_2.dir/flags.make
CMakeFiles/Task_2.dir/functions.cpp.o: /home/darya/Документы/453502/ОАиП/LR6/Task_2/functions.cpp
CMakeFiles/Task_2.dir/functions.cpp.o: CMakeFiles/Task_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task_2.dir/functions.cpp.o"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task_2.dir/functions.cpp.o -MF CMakeFiles/Task_2.dir/functions.cpp.o.d -o CMakeFiles/Task_2.dir/functions.cpp.o -c /home/darya/Документы/453502/ОАиП/LR6/Task_2/functions.cpp

CMakeFiles/Task_2.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task_2.dir/functions.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Документы/453502/ОАиП/LR6/Task_2/functions.cpp > CMakeFiles/Task_2.dir/functions.cpp.i

CMakeFiles/Task_2.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task_2.dir/functions.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Документы/453502/ОАиП/LR6/Task_2/functions.cpp -o CMakeFiles/Task_2.dir/functions.cpp.s

CMakeFiles/Task_2.dir/ivalidation.cpp.o: CMakeFiles/Task_2.dir/flags.make
CMakeFiles/Task_2.dir/ivalidation.cpp.o: /home/darya/Документы/453502/ОАиП/LR6/Task_2/ivalidation.cpp
CMakeFiles/Task_2.dir/ivalidation.cpp.o: CMakeFiles/Task_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Task_2.dir/ivalidation.cpp.o"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task_2.dir/ivalidation.cpp.o -MF CMakeFiles/Task_2.dir/ivalidation.cpp.o.d -o CMakeFiles/Task_2.dir/ivalidation.cpp.o -c /home/darya/Документы/453502/ОАиП/LR6/Task_2/ivalidation.cpp

CMakeFiles/Task_2.dir/ivalidation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task_2.dir/ivalidation.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Документы/453502/ОАиП/LR6/Task_2/ivalidation.cpp > CMakeFiles/Task_2.dir/ivalidation.cpp.i

CMakeFiles/Task_2.dir/ivalidation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task_2.dir/ivalidation.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Документы/453502/ОАиП/LR6/Task_2/ivalidation.cpp -o CMakeFiles/Task_2.dir/ivalidation.cpp.s

CMakeFiles/Task_2.dir/main.cpp.o: CMakeFiles/Task_2.dir/flags.make
CMakeFiles/Task_2.dir/main.cpp.o: /home/darya/Документы/453502/ОАиП/LR6/Task_2/main.cpp
CMakeFiles/Task_2.dir/main.cpp.o: CMakeFiles/Task_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Task_2.dir/main.cpp.o"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task_2.dir/main.cpp.o -MF CMakeFiles/Task_2.dir/main.cpp.o.d -o CMakeFiles/Task_2.dir/main.cpp.o -c /home/darya/Документы/453502/ОАиП/LR6/Task_2/main.cpp

CMakeFiles/Task_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task_2.dir/main.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Документы/453502/ОАиП/LR6/Task_2/main.cpp > CMakeFiles/Task_2.dir/main.cpp.i

CMakeFiles/Task_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task_2.dir/main.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Документы/453502/ОАиП/LR6/Task_2/main.cpp -o CMakeFiles/Task_2.dir/main.cpp.s

CMakeFiles/Task_2.dir/solution.cpp.o: CMakeFiles/Task_2.dir/flags.make
CMakeFiles/Task_2.dir/solution.cpp.o: /home/darya/Документы/453502/ОАиП/LR6/Task_2/solution.cpp
CMakeFiles/Task_2.dir/solution.cpp.o: CMakeFiles/Task_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Task_2.dir/solution.cpp.o"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task_2.dir/solution.cpp.o -MF CMakeFiles/Task_2.dir/solution.cpp.o.d -o CMakeFiles/Task_2.dir/solution.cpp.o -c /home/darya/Документы/453502/ОАиП/LR6/Task_2/solution.cpp

CMakeFiles/Task_2.dir/solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task_2.dir/solution.cpp.i"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darya/Документы/453502/ОАиП/LR6/Task_2/solution.cpp > CMakeFiles/Task_2.dir/solution.cpp.i

CMakeFiles/Task_2.dir/solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task_2.dir/solution.cpp.s"
	clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darya/Документы/453502/ОАиП/LR6/Task_2/solution.cpp -o CMakeFiles/Task_2.dir/solution.cpp.s

# Object files for target Task_2
Task_2_OBJECTS = \
"CMakeFiles/Task_2.dir/functions.cpp.o" \
"CMakeFiles/Task_2.dir/ivalidation.cpp.o" \
"CMakeFiles/Task_2.dir/main.cpp.o" \
"CMakeFiles/Task_2.dir/solution.cpp.o"

# External object files for target Task_2
Task_2_EXTERNAL_OBJECTS =

Task_2: CMakeFiles/Task_2.dir/functions.cpp.o
Task_2: CMakeFiles/Task_2.dir/ivalidation.cpp.o
Task_2: CMakeFiles/Task_2.dir/main.cpp.o
Task_2: CMakeFiles/Task_2.dir/solution.cpp.o
Task_2: CMakeFiles/Task_2.dir/build.make
Task_2: CMakeFiles/Task_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Task_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task_2.dir/build: Task_2
.PHONY : CMakeFiles/Task_2.dir/build

CMakeFiles/Task_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task_2.dir/clean

CMakeFiles/Task_2.dir/depend:
	cd /home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/darya/Документы/453502/ОАиП/LR6/Task_2 /home/darya/Документы/453502/ОАиП/LR6/Task_2 /home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default /home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default /home/darya/Документы/453502/ОАиП/LR6/Task_2/out/build/default/CMakeFiles/Task_2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Task_2.dir/depend
