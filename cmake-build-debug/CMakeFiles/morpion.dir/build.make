# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/nathan/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/nathan/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/morpion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/morpion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/morpion.dir/flags.make

CMakeFiles/morpion.dir/main.cpp.o: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/morpion.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/morpion.dir/main.cpp.o -c /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/main.cpp

CMakeFiles/morpion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/morpion.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/main.cpp > CMakeFiles/morpion.dir/main.cpp.i

CMakeFiles/morpion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/main.cpp -o CMakeFiles/morpion.dir/main.cpp.s

CMakeFiles/morpion.dir/src/Case.cpp.o: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/Case.cpp.o: ../src/Case.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/morpion.dir/src/Case.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/morpion.dir/src/Case.cpp.o -c /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Case.cpp

CMakeFiles/morpion.dir/src/Case.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/Case.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Case.cpp > CMakeFiles/morpion.dir/src/Case.cpp.i

CMakeFiles/morpion.dir/src/Case.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/Case.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Case.cpp -o CMakeFiles/morpion.dir/src/Case.cpp.s

CMakeFiles/morpion.dir/src/Grille.cpp.o: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/Grille.cpp.o: ../src/Grille.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/morpion.dir/src/Grille.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/morpion.dir/src/Grille.cpp.o -c /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Grille.cpp

CMakeFiles/morpion.dir/src/Grille.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/Grille.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Grille.cpp > CMakeFiles/morpion.dir/src/Grille.cpp.i

CMakeFiles/morpion.dir/src/Grille.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/Grille.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Grille.cpp -o CMakeFiles/morpion.dir/src/Grille.cpp.s

CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.o: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.o: ../src/ArbreGrilleIA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.o -c /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/ArbreGrilleIA.cpp

CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/ArbreGrilleIA.cpp > CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.i

CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/ArbreGrilleIA.cpp -o CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.s

CMakeFiles/morpion.dir/src/Jeu.cpp.o: CMakeFiles/morpion.dir/flags.make
CMakeFiles/morpion.dir/src/Jeu.cpp.o: ../src/Jeu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/morpion.dir/src/Jeu.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/morpion.dir/src/Jeu.cpp.o -c /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Jeu.cpp

CMakeFiles/morpion.dir/src/Jeu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/morpion.dir/src/Jeu.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Jeu.cpp > CMakeFiles/morpion.dir/src/Jeu.cpp.i

CMakeFiles/morpion.dir/src/Jeu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/morpion.dir/src/Jeu.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/src/Jeu.cpp -o CMakeFiles/morpion.dir/src/Jeu.cpp.s

# Object files for target morpion
morpion_OBJECTS = \
"CMakeFiles/morpion.dir/main.cpp.o" \
"CMakeFiles/morpion.dir/src/Case.cpp.o" \
"CMakeFiles/morpion.dir/src/Grille.cpp.o" \
"CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.o" \
"CMakeFiles/morpion.dir/src/Jeu.cpp.o"

# External object files for target morpion
morpion_EXTERNAL_OBJECTS =

morpion: CMakeFiles/morpion.dir/main.cpp.o
morpion: CMakeFiles/morpion.dir/src/Case.cpp.o
morpion: CMakeFiles/morpion.dir/src/Grille.cpp.o
morpion: CMakeFiles/morpion.dir/src/ArbreGrilleIA.cpp.o
morpion: CMakeFiles/morpion.dir/src/Jeu.cpp.o
morpion: CMakeFiles/morpion.dir/build.make
morpion: CMakeFiles/morpion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable morpion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/morpion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/morpion.dir/build: morpion

.PHONY : CMakeFiles/morpion.dir/build

CMakeFiles/morpion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/morpion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/morpion.dir/clean

CMakeFiles/morpion.dir/depend:
	cd /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug /Users/nathan/Documents/Polytech/3A/S6/algo-cpx/TP/morpion/cmake-build-debug/CMakeFiles/morpion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/morpion.dir/depend

