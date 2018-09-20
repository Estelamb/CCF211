//
// Created by estela on 20/09/18.
//
#include "TadAluno.h"
#define MaxTam 100

typedef int TipoApontador;

typedef struct {
    TipoAluno aluno[MaxTam];
    TipoApontador topo;
} TipoPilha;

void PilhaVazia (TipoPilha *pilha);
int PilhaEhVazia(TipoPilha *pilha);
int Empilha(TipoPilha *pilha, TipoAluno *aluno);
int Desimpilha (TipoPilha *pilha, TipoAluno *aluno);
int PilhaTamanho (TipoPilha *pilha);
void Imprime (TipoPilha pilha);