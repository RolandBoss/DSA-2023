cmake_minimum_required(VERSION 3.23)
project(First C)

set(CMAKE_C_STANDARD 23)

add_executable(First src/main.c src/person.c headers/person.h)
include_directories(First headers)
