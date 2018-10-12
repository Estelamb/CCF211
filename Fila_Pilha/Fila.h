//
// Created by estela on 12/10/18.
//
#include "Pilha.h"
typedef int Apontador;
typedef struct {
    TipoPalavra Palavra[Maxtam];
    Apontador Frente, Tras;
}TipoFila;

void FilaVazia(TipoFila *Fila);
int FilaEhVazia(TipoFila *Fila);
void Enfileirar(TipoFila *Fila, TipoPilha *Pilha, TipoPalavra *Palavra);
void Desinfileirar(TipoFila *Fila, TipoPilha *Pilha, TipoPalavra *Palavra);
void Imprimir(TipoFila Fila);