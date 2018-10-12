cmake_minimum_required(VERSION 3.12)
project(Fila_Pilha C)

set(CMAKE_C_STANDARD 99)

add_executable(Fila_Pilha main.c Palavra.c Palavra.h Pilha.c Pilha.h Fila.c Fila.h)
target_link_libraries(Fila_Pilha m)