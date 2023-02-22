cmake_minimum_required(VERSION 3.23)
project(Lab2 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab2 src/main.c src/functions_matrix.c headers/functions_matrix.h headers/constants.h)
include_directories(Lab2 headers)
