cmake_minimum_required(VERSION 3.27)
project(HTTP_Server C)

set(CMAKE_C_STANDARD 11)

add_executable(HTTP_Server main.c
        src/Server.c
        src/Server.h
        main.c
)
