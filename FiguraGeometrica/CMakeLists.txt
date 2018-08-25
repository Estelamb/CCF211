cmake_minimum_required(VERSION 3.12)
project(FiguraGeometrica C)

set(CMAKE_C_STANDARD 99)

add_executable(FiguraGeometrica main.c Figura.c Figura.h)
target_link_libraries(FiguraGeometrica m)