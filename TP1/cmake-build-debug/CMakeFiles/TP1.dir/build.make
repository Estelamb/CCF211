# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/CLion-2018.2.1/clion-2018.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/CLion-2018.2.1/clion-2018.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/estela/CLionProjects/TP1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/estela/CLionProjects/TP1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TP1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TP1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP1.dir/flags.make

CMakeFiles/TP1.dir/main.c.o: CMakeFiles/TP1.dir/flags.make
CMakeFiles/TP1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/estela/CLionProjects/TP1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TP1.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TP1.dir/main.c.o   -c /home/estela/CLionProjects/TP1/main.c

CMakeFiles/TP1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TP1.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/estela/CLionProjects/TP1/main.c > CMakeFiles/TP1.dir/main.c.i

CMakeFiles/TP1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TP1.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/estela/CLionProjects/TP1/main.c -o CMakeFiles/TP1.dir/main.c.s

CMakeFiles/TP1.dir/TAD_Voo.c.o: CMakeFiles/TP1.dir/flags.make
CMakeFiles/TP1.dir/TAD_Voo.c.o: ../TAD_Voo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/estela/CLionProjects/TP1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/TP1.dir/TAD_Voo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TP1.dir/TAD_Voo.c.o   -c /home/estela/CLionProjects/TP1/TAD_Voo.c

CMakeFiles/TP1.dir/TAD_Voo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TP1.dir/TAD_Voo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/estela/CLionProjects/TP1/TAD_Voo.c > CMakeFiles/TP1.dir/TAD_Voo.c.i

CMakeFiles/TP1.dir/TAD_Voo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TP1.dir/TAD_Voo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/estela/CLionProjects/TP1/TAD_Voo.c -o CMakeFiles/TP1.dir/TAD_Voo.c.s

CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.o: CMakeFiles/TP1.dir/flags.make
CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.o: ../TAD_Lista_de_Voos.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/estela/CLionProjects/TP1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.o   -c /home/estela/CLionProjects/TP1/TAD_Lista_de_Voos.c

CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/estela/CLionProjects/TP1/TAD_Lista_de_Voos.c > CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.i

CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/estela/CLionProjects/TP1/TAD_Lista_de_Voos.c -o CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.s

CMakeFiles/TP1.dir/TAD_Item_Matriz.c.o: CMakeFiles/TP1.dir/flags.make
CMakeFiles/TP1.dir/TAD_Item_Matriz.c.o: ../TAD_Item_Matriz.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/estela/CLionProjects/TP1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/TP1.dir/TAD_Item_Matriz.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TP1.dir/TAD_Item_Matriz.c.o   -c /home/estela/CLionProjects/TP1/TAD_Item_Matriz.c

CMakeFiles/TP1.dir/TAD_Item_Matriz.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TP1.dir/TAD_Item_Matriz.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/estela/CLionProjects/TP1/TAD_Item_Matriz.c > CMakeFiles/TP1.dir/TAD_Item_Matriz.c.i

CMakeFiles/TP1.dir/TAD_Item_Matriz.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TP1.dir/TAD_Item_Matriz.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/estela/CLionProjects/TP1/TAD_Item_Matriz.c -o CMakeFiles/TP1.dir/TAD_Item_Matriz.c.s

CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.o: CMakeFiles/TP1.dir/flags.make
CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.o: ../TAD_Matriz_Voos.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/estela/CLionProjects/TP1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.o   -c /home/estela/CLionProjects/TP1/TAD_Matriz_Voos.c

CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/estela/CLionProjects/TP1/TAD_Matriz_Voos.c > CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.i

CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/estela/CLionProjects/TP1/TAD_Matriz_Voos.c -o CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.s

# Object files for target TP1
TP1_OBJECTS = \
"CMakeFiles/TP1.dir/main.c.o" \
"CMakeFiles/TP1.dir/TAD_Voo.c.o" \
"CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.o" \
"CMakeFiles/TP1.dir/TAD_Item_Matriz.c.o" \
"CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.o"

# External object files for target TP1
TP1_EXTERNAL_OBJECTS =

TP1: CMakeFiles/TP1.dir/main.c.o
TP1: CMakeFiles/TP1.dir/TAD_Voo.c.o
TP1: CMakeFiles/TP1.dir/TAD_Lista_de_Voos.c.o
TP1: CMakeFiles/TP1.dir/TAD_Item_Matriz.c.o
TP1: CMakeFiles/TP1.dir/TAD_Matriz_Voos.c.o
TP1: CMakeFiles/TP1.dir/build.make
TP1: CMakeFiles/TP1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/estela/CLionProjects/TP1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable TP1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP1.dir/build: TP1

.PHONY : CMakeFiles/TP1.dir/build

CMakeFiles/TP1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TP1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TP1.dir/clean

CMakeFiles/TP1.dir/depend:
	cd /home/estela/CLionProjects/TP1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/estela/CLionProjects/TP1 /home/estela/CLionProjects/TP1 /home/estela/CLionProjects/TP1/cmake-build-debug /home/estela/CLionProjects/TP1/cmake-build-debug /home/estela/CLionProjects/TP1/cmake-build-debug/CMakeFiles/TP1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TP1.dir/depend

