//
// Created by estela on 12/10/18.
//

#include "Pilha.h"

void PilhaVazia(TipoPilha *Pilha){
    Pilha->Topo = 0;
}

int PilhaEhVazia(TipoPilha *Pilha){
    return (Pilha->Topo == 0);
}

void Empilha(TipoPilha *Pilha, TipoPalavra *Palavra){
    if(Pilha->Topo == Maxtam){
        printf("A Pilha está cheia!\n");
    }

    Pilha->Palvra[Pilha->Topo] = *Palavra;
    Pilha->Topo++;
}

void Desimpilha(TipoPilha *PIlha, TipoPalavra *Palavra){
    if(PilhaEhVazia(PIlha)){
        printf("A Pilha está vazia!\n");
    }

    PIlha->Topo--;
    *Palavra = PIlha->Palvra[PIlha->Topo];
}

int TamPilha(TipoPilha *Pilha){
    return (Pilha->Topo);
}