cmake_minimum_required(VERSION 3.23)
project(parcialis_Rancz_Roland C)

set(CMAKE_C_STANDARD 23)

add_executable(parcialis_Rancz_Roland src/main.c src/cookies.c headers/cookies.h)
include_directories(parcialis_Rancz_Roland headers)
