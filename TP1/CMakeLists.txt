cmake_minimum_required(VERSION 3.12)
project(TP1 C)

set(CMAKE_C_STANDARD 99)

add_executable(TP1 main.c TAD_Voo.c TAD_Voo.h TAD_Lista_de_Voos.c TAD_Lista_de_Voos.h TAD_Item_Matriz.c TAD_Item_Matriz.h TAD_Matriz_Voos.c TAD_Matriz_Voos.h)
target_link_libraries(TP1 m)