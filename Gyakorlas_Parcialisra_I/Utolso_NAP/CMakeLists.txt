cmake_minimum_required(VERSION 3.23)
project(Utolso_NAP C)

set(CMAKE_C_STANDARD 23)

add_executable(Utolso_NAP main.c src/gyakorlat.cpp gyakorlat.h)
include_directories(Utolso_NAP headers)
