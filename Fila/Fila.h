//
// Created by estela on 12/10/18.
//
#include "Paciente.h"

typedef struct TipoCelula *TipoApontador;
typedef struct TipoCelula{
    TipoPaciente Paciente;
    TipoApontador Prox;
}TipoCelula;

typedef struct {
    TipoApontador Frente, Tras;
    int ContPacientes;
}TipoFila;

void FFVazia(TipoFila *Fila);
int Vazia(TipoFila Fila);
void Enfileira(TipoPaciente Paciente, TipoFila *Fila);
void Desenfileira(TipoFila *Fila, TipoPaciente *Paciente);
void ImprimirFila(TipoFila Fila);
void ProximoPaciente(TipoFila *Fila, TipoPaciente *Paciente);