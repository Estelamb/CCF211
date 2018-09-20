//
// Created by estela on 20/09/18.
//

#include "TadPilha.h"

void PilhaVazia (TipoPilha *pilha){
    pilha->topo = 0;
} /* Iniciando a Pilha, deixando a vazia */

int PilhaEhVazia(TipoPilha *pilha){
    return (pilha->topo == 0);
} /* Verifica se a Pilha esta vazia */

int Empilha(TipoPilha *pilha, TipoAluno *aluno){
    if(pilha->topo == MaxTam){
        return 0;
    }

    pilha->aluno[pilha->topo] = *aluno;
    pilha->topo++;
    return 1;
} /* Empilhando a Pilha com os dados Recebidos */

int Desimpilha (TipoPilha *pilha, TipoAluno *aluno){
    if(PilhaEhVazia(pilha)){
        return 0;
    }

    pilha->topo--;
    *aluno = pilha->aluno[pilha->topo];
    return 1;
} /* Desimpilhando a Pilha, ou seja, retirada de dados */

int PilhaTamanho (TipoPilha *pilha){
    return pilha->topo;
} /* Retornando o tamanho da Pilha */

void Imprime (TipoPilha pilha){
    int Aux;

    for(Aux=0; Aux<pilha.topo; Aux++){
        printf("------------ INFO ------------\n");
        printf("Nome: %s\n", pilha.aluno[Aux].nome);
        printf("Matricula: %d\n", pilha.aluno[Aux].matricula);
        printf("Conceito: %s\n", pilha.aluno[Aux].conceito);
        printf("------------------------------\n");
    }
}