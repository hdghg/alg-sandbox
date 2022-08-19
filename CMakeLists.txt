cmake_minimum_required(VERSION 3.16)
project(alg-sandbox C)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c)

# Not used yet
enable_testing()
add_subdirectory(cases)
