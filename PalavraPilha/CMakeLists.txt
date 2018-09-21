cmake_minimum_required(VERSION 3.12)
project(PalavraPilha C)

set(CMAKE_C_STANDARD 99)

add_executable(PalavraPilha main.c Pilha.c Pilha.h)
target_link_libraries(PalavraPilha m)