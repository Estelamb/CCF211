//
// Created by Estela Miranda Batista on 29/08/18.
//
#include "Aluno.h"

void FLVazia(TipoLista *Lista) {
    Lista -> Primeiro = INICIOARRANJO;
    Lista -> Ultimo = Lista -> Primeiro;
}  /* FLVazia */

int Vazia(TipoLista Lista) {
    return (Lista.Primeiro == Lista.Ultimo);
}  /* Vazia */

void Insere(TipoAluno x, TipoLista *Lista) {
    if (Lista -> Ultimo > MAXTAM) printf("Lista esta cheia\n");
    else {
        Lista -> Aluno[Lista -> Ultimo - 1] = x;
        Lista -> Ultimo++;
    }
}  /* Insere */

void Imprime(TipoLista Lista) {
    int Aux;

    for (Aux = Lista.Primeiro-1; Aux <= (Lista.Ultimo - 2); Aux++){
        printf("------------ INFO ------------\n");
        printf("Aluno: %s", Lista.Aluno[Aux].nome);
        printf("Matrícula: %d\n", Lista.Aluno[Aux].matricula);
        printf("Média Notas: %.1lf\n", (Lista.Aluno[Aux].nota1 + Lista.Aluno[Aux].nota2)/2.0);
        printf("------------------------------\n");
    }
}  /* Imprime */