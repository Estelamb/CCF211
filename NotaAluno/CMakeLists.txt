cmake_minimum_required(VERSION 3.12)
project(NotaAluno C)

set(CMAKE_C_STANDARD 99)

add_executable(NotaAluno main.c Aluno.c Aluno.h)
target_link_libraries(NotaAluno m)