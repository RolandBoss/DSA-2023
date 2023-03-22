cmake_minimum_required(VERSION 3.23)
project(Vegem C)

set(CMAKE_C_STANDARD 23)

add_executable(Vegem main.c array.c array.h)
include_directories(Vegem headers)
