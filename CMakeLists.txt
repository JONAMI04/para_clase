cmake_minimum_required(VERSION 3.27)
project(prueba C)

set(CMAKE_C_STANDARD 11)

add_executable(prueba main.c
        mia.h
        mia.c)
