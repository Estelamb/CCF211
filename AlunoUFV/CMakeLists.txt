cmake_minimum_required(VERSION 3.12)
project(AlunoUFV C)

set(CMAKE_C_STANDARD 99)

add_executable(AlunoUFV main.c Aluno.c Aluno.h)
target_link_libraries(AlunoUFV m)