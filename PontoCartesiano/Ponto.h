//
// Created by Estela Miranda Batista on 21/08/18.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Declaração de variaveis */
typedef struct {
    int x;
    int y;
}TipoPonto;

/* Operações a serem realizadas */
void Atribui (TipoPonto* ponto, int x, int y);
void ImprimeX (TipoPonto ponto);
void ImprimeY (TipoPonto ponto);
void Quadrante (TipoPonto ponto);