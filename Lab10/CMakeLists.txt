cmake_minimum_required(VERSION 3.23)
project(Lab10 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab10 src/main.c headers/Queue.h src/Queue.c)
include_directories(headers)
