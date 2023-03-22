cmake_minimum_required(VERSION 3.23)
project(Lab4 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab4 main.c src/array.c headers/array.h headers/constans.h)
include_directories(Lab4 headers)
