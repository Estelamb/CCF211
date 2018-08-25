cmake_minimum_required(VERSION 3.12)
project(NumeroComplexo C)

set(CMAKE_C_STANDARD 99)

add_executable(NumeroComplexo main.c NumeroComplexo.c NumeroComplexo.h)
target_link_libraries(NumeroComplexo m)