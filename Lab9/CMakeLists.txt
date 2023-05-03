cmake_minimum_required(VERSION 3.23)
project(Lab9 C)

set(CMAKE_C_STANDARD 23)

add_executable(Lab9 main.c sources/Node.c headers/Node.h)
include_directories(headers Lab9)
