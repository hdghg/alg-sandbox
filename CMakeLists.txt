cmake_minimum_required(VERSION 3.16)
project(alg-sandbox C)

set(CMAKE_C_STANDARD 99)

#add_executable(main bubble/main.c)

add_subdirectory(bubble bubble)
add_subdirectory(insertionsort insertionsort)
