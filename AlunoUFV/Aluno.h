//
// Created by Estela Miranda Batista on 19/08/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Definir o tipo das variaveis que caracterizam aluno */
typedef struct {
    char nome[100];
    int matricula;
    char curso[1000];
    double conceito;
    int campus;
} TipoAluno;

/* Definir operações a serem feitas com as informações do aluno */
void Inserir (TipoAluno* aluno, char *nome, int matricula, char *curso, double conceito, int campus);
void Imprime (TipoAluno aluno);
void AlterarCurso (TipoAluno* aluno, char *curso);
void AlterarConceito (TipoAluno* aluno, double conceito);