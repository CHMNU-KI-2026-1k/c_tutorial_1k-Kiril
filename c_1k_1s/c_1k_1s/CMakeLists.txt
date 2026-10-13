# CMakeList.txt : CMake project for C_1k_1s, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (C_1k_1s "C_1k_1s.cpp" "C_1k_1s.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET C_1k_1s PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
