//
// Created by Estela Miranda Batista on 29/08/18.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Inicio 0
#define Tam 100

typedef int Apontador;

typedef struct {
    char produto[100];
    int codigo;
    double preco;
} TipoProduto;

typedef struct {
    TipoProduto Produto[Tam];
    Apontador Primeiro, Ultimo;
} TipoLista;

void FlVazia(TipoLista* Lista);
int Vazia(TipoLista* Lista);
void Insere(TipoProduto prod, TipoLista *Lista);
void Preco(TipoLista Lista, int Cod);
void Imprime(TipoLista Lista);