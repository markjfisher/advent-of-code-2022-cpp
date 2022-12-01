# CMakeList.txt : CMake project for aoc2022, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.20)

# Add source to this project's executable.
add_executable (aoc2022 
    "aoc2022.cpp" 
    "aoc2022.h" 
    "day01/day01.h"
    "day01/day01.cpp"
    "input/day01.txt"
 "util.h")

# Add all the input files
file(GLOB INPUT_FILES ${CMAKE_CURRENT_SOURCE_DIR}/input/*.txt)
file(COPY ${INPUT_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/input)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET aoc2022 PROPERTY CXX_STANDARD 23)
endif()

if(MSVC)
    target_compile_options(aoc2022 PUBLIC "/Zc:__cplusplus")
endif()

# TODO: Add tests and install targets if needed.
