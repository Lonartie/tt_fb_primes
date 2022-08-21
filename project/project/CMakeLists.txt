# CMakeList.txt : CMake project for project, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (project "project.cpp"  "PrimeVector.h" "PrimeVector.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET project PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
