cmake_minimum_required(VERSION 3.10)
project(StringArt VERSION 1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Build CMakeLists.txt in the random directory.
add_subdirectory(random)


install(TARGETS sa_random DESTINATION bin)
