//
// Created by Estela Miranda Batista on 21/08/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Declaração de variaveis*/
typedef struct {
    int lados;
} TipoFigura;

/* Operações que serão realizadas */
void Atribui (TipoFigura* ponto, int lados);
void Identificar (TipoFigura ponto);