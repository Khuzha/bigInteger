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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/khuzha/projects/myBigInteger

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/khuzha/projects/myBigInteger/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/myBigInteger.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myBigInteger.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myBigInteger.dir/flags.make

CMakeFiles/myBigInteger.dir/main.cpp.o: CMakeFiles/myBigInteger.dir/flags.make
CMakeFiles/myBigInteger.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/khuzha/projects/myBigInteger/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myBigInteger.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myBigInteger.dir/main.cpp.o -c /home/khuzha/projects/myBigInteger/main.cpp

CMakeFiles/myBigInteger.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myBigInteger.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/khuzha/projects/myBigInteger/main.cpp > CMakeFiles/myBigInteger.dir/main.cpp.i

CMakeFiles/myBigInteger.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myBigInteger.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/khuzha/projects/myBigInteger/main.cpp -o CMakeFiles/myBigInteger.dir/main.cpp.s

CMakeFiles/myBigInteger.dir/BigInteger.cpp.o: CMakeFiles/myBigInteger.dir/flags.make
CMakeFiles/myBigInteger.dir/BigInteger.cpp.o: ../BigInteger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/khuzha/projects/myBigInteger/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myBigInteger.dir/BigInteger.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myBigInteger.dir/BigInteger.cpp.o -c /home/khuzha/projects/myBigInteger/BigInteger.cpp

CMakeFiles/myBigInteger.dir/BigInteger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myBigInteger.dir/BigInteger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/khuzha/projects/myBigInteger/BigInteger.cpp > CMakeFiles/myBigInteger.dir/BigInteger.cpp.i

CMakeFiles/myBigInteger.dir/BigInteger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myBigInteger.dir/BigInteger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/khuzha/projects/myBigInteger/BigInteger.cpp -o CMakeFiles/myBigInteger.dir/BigInteger.cpp.s

# Object files for target myBigInteger
myBigInteger_OBJECTS = \
"CMakeFiles/myBigInteger.dir/main.cpp.o" \
"CMakeFiles/myBigInteger.dir/BigInteger.cpp.o"

# External object files for target myBigInteger
myBigInteger_EXTERNAL_OBJECTS =

myBigInteger: CMakeFiles/myBigInteger.dir/main.cpp.o
myBigInteger: CMakeFiles/myBigInteger.dir/BigInteger.cpp.o
myBigInteger: CMakeFiles/myBigInteger.dir/build.make
myBigInteger: CMakeFiles/myBigInteger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/khuzha/projects/myBigInteger/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable myBigInteger"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myBigInteger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myBigInteger.dir/build: myBigInteger

.PHONY : CMakeFiles/myBigInteger.dir/build

CMakeFiles/myBigInteger.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myBigInteger.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myBigInteger.dir/clean

CMakeFiles/myBigInteger.dir/depend:
	cd /home/khuzha/projects/myBigInteger/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/khuzha/projects/myBigInteger /home/khuzha/projects/myBigInteger /home/khuzha/projects/myBigInteger/cmake-build-debug /home/khuzha/projects/myBigInteger/cmake-build-debug /home/khuzha/projects/myBigInteger/cmake-build-debug/CMakeFiles/myBigInteger.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myBigInteger.dir/depend
