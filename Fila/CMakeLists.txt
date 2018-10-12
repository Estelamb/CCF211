cmake_minimum_required(VERSION 3.12)
project(Fila C)

set(CMAKE_C_STANDARD 99)

add_executable(Fila main.c Paciente.c Paciente.h Fila.c Fila.h)
target_link_libraries(Fila m)