cmake_minimum_required(VERSION 3.12)
project(Pilha C)

set(CMAKE_C_STANDARD 99)

add_executable(Pilha main.c TadAluno.c TadAluno.h TadPilha.c TadPilha.h)
target_link_libraries(Pilha m)