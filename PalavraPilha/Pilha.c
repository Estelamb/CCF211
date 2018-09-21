//
// Created by estela on 21/09/18.
//

#include "Pilha.h"

void IniciarPalavra(TipoPalavra *palavra){
    palavra->letra = '\0';
}

void PilhaVazia (TipoPilha *pilha){
    pilha->topo = 0;
}

int PilhaEhVazia(TipoPilha *pilha){
    return (pilha->topo == 0);
}

int Empilha(TipoPilha *pilha, TipoPalavra *palavra){
    if(pilha->topo == Maxtam){
        return 0;
    }

    pilha->palavra[pilha->topo] = *palavra;
    pilha->topo++;
    return 1;
}

int Desimpilha (TipoPilha *pilha, TipoPalavra *palavra){
    if(PilhaEhVazia(pilha)){
        return 0;
    }

    pilha->topo--;
    printf("%c", pilha->palavra[pilha->topo].letra);
    *palavra = pilha->palavra[pilha->topo];
    return 1;
}