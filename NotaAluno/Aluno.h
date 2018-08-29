//
// Created by Estela Miranda Batista on 29/08/18.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define INICIOARRANJO   1
#define MAXTAM          1000

typedef int TipoApontador;

typedef struct {
    char nome[100];
    int matricula;
    double nota1;
    double nota2;
} TipoAluno;

typedef struct {
    TipoAluno Aluno[MAXTAM];
    TipoApontador Primeiro, Ultimo;
} TipoLista;

void FLVazia(TipoLista *Lista);
int Vazia(TipoLista Lista);
void Insere(TipoAluno x, TipoLista *Lista);
void Imprime(TipoLista Lista);