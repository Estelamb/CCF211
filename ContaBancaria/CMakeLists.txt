cmake_minimum_required(VERSION 3.12)
project(ContaBancaria C)

set(CMAKE_C_STANDARD 99)

add_executable(ContaBancaria main.c ContaBancaria.c ContaBancaria.h)
target_link_libraries(ContaBancaria m)