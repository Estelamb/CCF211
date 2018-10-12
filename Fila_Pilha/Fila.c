//
// Created by estela on 12/10/18.
//

#include "Fila.h"

void FilaVazia(TipoFila *Fila){
    Fila->Frente = 0;
    Fila->Tras = Fila->Frente;
}

int FilaEhVazia(TipoFila *Fila){
    return (Fila->Frente == Fila->Tras);
}

void Enfileirar(TipoFila *Fila, TipoPilha *Pilha, TipoPalavra *Palavra){
    if(Fila->Tras+1 == Fila->Frente){
        printf("Fila Cheia!\n");
    }

    while (Pilha->Topo != 0){
        Pilha->Topo--;
        Fila->Palavra[Fila->Tras] = Pilha->Palvra[Pilha->Topo];
        Fila->Tras = (Fila->Tras+1) % (Maxtam+1);
    }
}
void Desinfileirar(TipoFila *Fila, TipoPilha *Pilha, TipoPalavra *Palavra){
    if(FilaEhVazia(Fila)){
        printf("A Fila Está Vazia!\n");
    }

    while(Fila->Frente != Fila->Tras){
        *Palavra = Fila->Palavra[Fila->Frente];
        Fila->Frente = (Fila->Frente +1) % (Maxtam+1);
    }
}

void Imprimir(TipoFila Fila){
    Apontador Aux;

    for(Aux=0; Aux<Fila.Tras; Aux++){
        printf("%c", Fila.Palavra[Aux].letra);
    }
}