# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build

# Include any dependencies generated for this target.
include src/actividades/CMakeFiles/actividades-main.dir/depend.make

# Include the progress variables for this target.
include src/actividades/CMakeFiles/actividades-main.dir/progress.make

# Include the compile flags for this target's objects.
include src/actividades/CMakeFiles/actividades-main.dir/flags.make

src/actividades/CMakeFiles/actividades-main.dir/actividades-main.cc.o: src/actividades/CMakeFiles/actividades-main.dir/flags.make
src/actividades/CMakeFiles/actividades-main.dir/actividades-main.cc.o: ../src/actividades/actividades-main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/actividades/CMakeFiles/actividades-main.dir/actividades-main.cc.o"
	cd /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/src/actividades && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/actividades-main.dir/actividades-main.cc.o -c /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/src/actividades/actividades-main.cc

src/actividades/CMakeFiles/actividades-main.dir/actividades-main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/actividades-main.dir/actividades-main.cc.i"
	cd /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/src/actividades && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/src/actividades/actividades-main.cc > CMakeFiles/actividades-main.dir/actividades-main.cc.i

src/actividades/CMakeFiles/actividades-main.dir/actividades-main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/actividades-main.dir/actividades-main.cc.s"
	cd /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/src/actividades && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/src/actividades/actividades-main.cc -o CMakeFiles/actividades-main.dir/actividades-main.cc.s

# Object files for target actividades-main
actividades__main_OBJECTS = \
"CMakeFiles/actividades-main.dir/actividades-main.cc.o"

# External object files for target actividades-main
actividades__main_EXTERNAL_OBJECTS =

src/actividades/actividades-main: src/actividades/CMakeFiles/actividades-main.dir/actividades-main.cc.o
src/actividades/actividades-main: src/actividades/CMakeFiles/actividades-main.dir/build.make
src/actividades/actividades-main: src/actividades/libactividades.a
src/actividades/actividades-main: src/actividad/libactividad.a
src/actividades/actividades-main: src/actividades/CMakeFiles/actividades-main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable actividades-main"
	cd /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/src/actividades && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/actividades-main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/actividades/CMakeFiles/actividades-main.dir/build: src/actividades/actividades-main

.PHONY : src/actividades/CMakeFiles/actividades-main.dir/build

src/actividades/CMakeFiles/actividades-main.dir/clean:
	cd /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/src/actividades && $(CMAKE_COMMAND) -P CMakeFiles/actividades-main.dir/cmake_clean.cmake
.PHONY : src/actividades/CMakeFiles/actividades-main.dir/clean

src/actividades/CMakeFiles/actividades-main.dir/depend:
	cd /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/src/actividades /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/src/actividades /home/carlos/Escritorio/Equipo-306/Equipo-306/codigoProyecto/build/src/actividades/CMakeFiles/actividades-main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/actividades/CMakeFiles/actividades-main.dir/depend

