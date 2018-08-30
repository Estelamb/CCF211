//
// Created by Estela Miranda Batista on 30/08/18.
//

#include "ContaBancaria.h"

void FlVazia(TipoLista* Lista){
    Lista->Primeiro = Inicio;
    Lista->Ultimo = Lista->Primeiro;
} /* FlVazia */

void Insere(TipoConta x, TipoLista* Lista){
    if(Lista->Ultimo == Tam)
        printf("Lista Cheia!\n");
    else
        Lista->Conta[Lista->Ultimo++] = x;
} /* Inserindo dados da Conta */

void Deposito(TipoLista* Lista, double deposito, int conta){
    int i;
    for(i = Lista->Primeiro; i < Lista->Ultimo; i++){
        if(Lista->Conta[i].conta == conta){
            Lista->Conta[i].salto = Lista->Conta[i].salto + deposito;
            printf("------------ INFO ------------\n");
            printf("Usuário: %s", Lista->Conta[i].nome);
            printf("Salto: %.2lf\n", Lista->Conta[i].salto);
            printf("------------------------------\n");
        } else {
            printf("Conta Inválida!\n");
        }
    }
} /* Ao encontrar a conta desejada, adicionando valores (depoisto) à conta desejada e imprimindo
 novo dados */

void Saque(TipoLista* Lista, double saque, int conta){
    int i;
    for(i = Lista->Primeiro; i < Lista->Ultimo; i++){
        if(Lista->Conta[i].conta == conta){
            Lista->Conta[i].salto = Lista->Conta[i].salto - saque;
            printf("------------ INFO ------------\n");
            printf("Usuário: %s", Lista->Conta[i].nome);
            printf("Salto: %.2lf\n", Lista->Conta[i].salto);
            printf("------------------------------\n");
        } else {
            printf("Conta Inválida!\n");
        }
    }
} /* Ao encontrar a conta desejada, retirando valores (saque) à conta desejada e imprimindo
 novo dados */

void Imprime(TipoLista Lista){
    int i;
    for(i = Lista.Primeiro; i < Lista.Ultimo; i++){
            printf("------------ INFO ------------\n");
            printf("Usuário: %s", Lista.Conta[i].nome);
            printf("Salto: %.2lf\n", Lista.Conta[i].salto);
            printf("------------------------------\n");
    }
} /* Imprimindo dados do cliente */