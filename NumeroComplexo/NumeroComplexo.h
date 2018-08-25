//
// Created by Estela Miranda Batista on 20/08/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Definir variavéis para número complexo */
typedef struct {
    int real;
    char complexo[3];
    int real1;
} TipoNumero;

void Atribui (TipoNumero* numero, int real, char *complexo);
void ImprimeComplexo (TipoNumero numero);
void Copia (TipoNumero numero);
void Soma (TipoNumero* numero, int real1);
void EhReal (TipoNumero* numero, char *complexo);