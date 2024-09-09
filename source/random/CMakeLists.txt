# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(sa_random VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the source file
set(SOURCES src/sa_random.cpp)

# Add executable target
add_executable(sa_random ${SOURCES})

# Installation details (optional)
install(TARGETS sa_random DESTINATION bin)

# Add custom flags if needed (optional)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

# Add any required libraries (optional)
# target_link_libraries(sa_random <library-name>)
