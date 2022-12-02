# CMakeList.txt : CMake project for aoc202X, include source and define
# project specific logic here.

set(ALL_YEARS_TARGETS
    2022
)

# Add source to each year's executable.
foreach (year ${ALL_YEARS_TARGETS})
    file(GLOB AOC_SRC CONFIGURE_DEPENDS "y${year}/day[0-9][0-9]/*.h" "y${year}/day[0-9][0-9]/*.cpp" "y${year}/aoc${year}.cpp" "y${year}/aoc${year}.h")
    set(OTHER_SRC common/util.cpp)
    add_executable ("aoc${year}" ${AOC_SRC} ${OTHER_SRC})
    set_property(TARGET "aoc${year}" PROPERTY CXX_STANDARD 23)
    target_include_directories("aoc${year}" PRIVATE
      "common/include"
    )
    if(MSVC)
        target_compile_options(aoc2022 PUBLIC "/Zc:__cplusplus")
    endif()
    file(GLOB INPUT_FILES y${year}/input/*.txt)
    file(COPY ${INPUT_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/y${year}/input)
endforeach()


# copy the input files to the output dir

# 2022

# MSVC Hack



# TODO: Add tests and install targets if needed.

#find_package(Catch2 3 REQUIRED)
#add_executable(tests test.cpp)
#target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
