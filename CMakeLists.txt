# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.10)

project ("c_1k_1s")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../dist/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../dist/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../dist/bin)

if (LINUX)
    list(APPEND COMMON_DEPS pthread m)
endif()

if (CMAKE_COMPILER_IS_GNUCXX)
    add_definitions (-Wall -pedantic)
endif()

if(MSVC)
    add_definitions (/W4)
    add_compile_definitions(_USE_MATH_DEFINES)
endif()

# Include sub-projects.
add_subdirectory ("lab01")