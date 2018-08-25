cmake_minimum_required(VERSION 3.12)
project(PontoCartesiano C)

set(CMAKE_C_STANDARD 99)

add_executable(PontoCartesiano main.c Ponto.c Ponto.h)
target_link_libraries(PontoCartesiano m)