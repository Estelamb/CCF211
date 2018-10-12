//
// Created by estela on 12/10/18.
//

#include "Palavra.h"
#define Maxtam 20

typedef int TipoApontador;
typedef struct {
    TipoPalavra Palvra[Maxtam];
    TipoApontador Topo;
}TipoPilha;

void PilhaVazia(TipoPilha *Pilha);
int PilhaEhVazia(TipoPilha *Pilha);
void Empilha(TipoPilha *Pilha, TipoPalavra *Palavra);
void Desimpilha(TipoPilha *PIlha, TipoPalavra *Palavra);
int TamPilha(TipoPilha *Pilha);