//
// Created by estela on 12/10/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[200];
    int idade;
    char sexo[10];
}TipoPaciente;

void IniciarPaciente(TipoPaciente *paciente);