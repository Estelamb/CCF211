#include "Fila.h"

void FFVazia(TipoFila *Fila){
    Fila->Frente = (TipoApontador) malloc(sizeof(TipoCelula));
    Fila->Tras = Fila->Frente;
    Fila->Frente->Prox = NULL;
}

int Vazia(TipoFila Fila){
    return (Fila.Frente == Fila.Tras);
}

void Enfileira(TipoPaciente Paciente, TipoFila *Fila){
    Fila->Tras->Prox = (TipoApontador) malloc(sizeof(TipoCelula));
    Fila->Tras = Fila->Tras->Prox;
    Fila->Tras->Paciente = Paciente;
    Fila->Tras->Prox = NULL;
    Fila->ContPacientes++;
}

void Desenfileira(TipoFila *Fila, TipoPaciente *Paciente){
    TipoApontador Aux;

    if(Vazia(*Fila)){
        printf("A Fila está Vazia!\n");
    }

    Aux = Fila->Frente->Prox;
    Fila->Frente = Fila->Frente->Prox;
    *Paciente = Fila->Frente->Paciente;
    free(Aux);
}

void ImprimirFila(TipoFila Fila){
    TipoApontador Aux;

    Aux = Fila.Frente->Prox;

    while(Aux != NULL){
        printf("NOME: %s", Aux->Paciente.nome);
        printf("SEXO: %s\n", Aux->Paciente.sexo);
        printf("IDADE: %d\n", Aux->Paciente.idade);
        printf("--------------------\n");
        Aux = Aux->Prox;
    }
}

void ProximoPaciente(TipoFila *Fila, TipoPaciente *Paciente){
    TipoApontador Aux;

    Aux = Fila->Frente->Prox;
    printf("\n------- INFO -------\n");
    printf("NOME: %s", Aux->Paciente.nome);
    printf("SEXO: %s\n", Aux->Paciente.sexo);
    printf("IADADE: %d\n", Aux->Paciente.idade);
    printf("--------------------\n");


    Fila->Frente = Fila->Frente->Prox;
    *Paciente = Fila->Frente->Paciente;
    free(Aux);
}