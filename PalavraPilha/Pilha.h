//
// Created by estela on 21/09/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Maxtam 20

typedef struct {
    char letra;
} TipoPalavra;

typedef int TipoApontador;

typedef struct {
    TipoPalavra palavra[Maxtam];
    TipoApontador topo;
} TipoPilha;

void IniciarPalavra(TipoPalavra *palavra);
void PilhaVazia (TipoPilha *pilha);
int PilhaEhVazia(TipoPilha *pilha);
int Empilha(TipoPilha *pilha, TipoPalavra *palavra);
int Desimpilha(TipoPilha *pilha, TipoPalavra *palavra);