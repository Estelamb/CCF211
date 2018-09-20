//
// Created by estela on 20/09/18.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int matricula;
    char conceito[10];
} TipoAluno;

void IniciarAluno (TipoAluno *aluno);