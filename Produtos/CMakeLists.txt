cmake_minimum_required(VERSION 3.12)
project(Produtos C)

set(CMAKE_C_STANDARD 99)

add_executable(Produtos main.c Produtos.c Produtos.h)
target_link_libraries(Produtos m)