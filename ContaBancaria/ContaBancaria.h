//
// Created by Estela Miranda Batista on 30/08/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Inicio 0
#define Tam 100

typedef int Appontador;

typedef struct {
    int conta;
    char nome[100];
    int cpf;
    double salto;
} TipoConta;

typedef struct {
    TipoConta Conta[Tam];
    Appontador Primeiro, Ultimo;
} TipoLista;

void FlVazia(TipoLista* Lista);
void Insere(TipoConta x, TipoLista* Lista);
void Deposito(TipoLista* Lista, double deposito, int conta);
void Saque(TipoLista* Lista, double saque, int conta);
void Imprime(TipoLista Lista);