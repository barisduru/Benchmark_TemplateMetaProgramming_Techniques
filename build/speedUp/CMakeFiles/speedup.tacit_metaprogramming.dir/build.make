# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build

# Include any dependencies generated for this target.
include speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/compiler_depend.make

# Include the progress variables for this target.
include speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/progress.make

# Include the compile flags for this target's objects.
include speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/flags.make

speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o: speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/flags.make
speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o: _metabench/speedup.tacit_metaprogramming.cpp
speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o: speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o"
	cd /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/speedUp && /usr/bin/ruby -- "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/compile.rb" /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o -MF CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o.d -o CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o -c /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/speedup.tacit_metaprogramming.cpp

speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.i"
	cd /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/speedUp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/speedup.tacit_metaprogramming.cpp > CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.i

speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.s"
	cd /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/speedUp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/speedup.tacit_metaprogramming.cpp -o CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.s

# Object files for target speedup.tacit_metaprogramming
speedup_tacit_metaprogramming_OBJECTS = \
"CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o"

# External object files for target speedup.tacit_metaprogramming
speedup_tacit_metaprogramming_EXTERNAL_OBJECTS =

_metabench/speedup.tacit_metaprogramming: speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/__/_metabench/speedup.tacit_metaprogramming.cpp.o
_metabench/speedup.tacit_metaprogramming: speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/build.make
_metabench/speedup.tacit_metaprogramming: speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../_metabench/speedup.tacit_metaprogramming"
	cd /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/speedUp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/speedup.tacit_metaprogramming.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/build: _metabench/speedup.tacit_metaprogramming
.PHONY : speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/build

speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/clean:
	cd /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/speedUp && $(CMAKE_COMMAND) -P CMakeFiles/speedup.tacit_metaprogramming.dir/cmake_clean.cmake
.PHONY : speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/clean

speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/depend:
	cd /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/speedUp /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : speedUp/CMakeFiles/speedup.tacit_metaprogramming.dir/depend

