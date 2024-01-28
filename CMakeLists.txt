cmake_minimum_required(VERSION 3.27)
project(HTTP_Server C)

set(CMAKE_C_STANDARD 11)

add_executable(HTTP_Server main.c
        Server.h
        Server.c
        test.c)
