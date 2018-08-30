//
// Created by Estela Miranda Batista on 29/08/18.
//
#include "Produtos.h"

void FlVazia(TipoLista* Lista){
    Lista->Primeiro = Inicio;
    Lista->Ultimo = Lista->Primeiro;
} /* FlVazia */

int Vazia(TipoLista* Lista){
    return(Lista->Ultimo == Lista->Primeiro);
} /* Lista Vazia */

void Insere(TipoProduto prod, TipoLista *Lista){
    if(Lista->Ultimo == Tam)
        printf("Lista Cheia!\n");
    else{
        Lista->Produto[Lista->Ultimo++] = prod;
    }
} /* Inserindo os Dados de cada produto na lista */

void Preco(TipoLista Lista, int Cod){
    int i;
    for(i = Lista.Primeiro; i < Lista.Ultimo; i++){
        if(Lista.Produto[i].codigo == Cod){
            printf("------------ INFO ------------\n");
            printf("Código: %d\n", Lista.Produto[i].codigo);
            printf("Produto: %s", Lista.Produto[i].produto);
            printf("Preço: %lf\n", Lista.Produto[i].preco);
            printf("------------------------------\n");
        }else {
            printf("Código Inválido!");
        }
    }
} /* Verificando na lista de produtos registrados o valor de um produto */

void Imprime(TipoLista Lista){
    int i;
    for(i = Lista.Primeiro; i < Lista.Ultimo; i++){
        printf("------------ INFO ------------\n");
        printf("Código: %d\n", Lista.Produto[i].codigo);
        printf("Produto: %s", Lista.Produto[i].produto);
        printf("------------------------------\n");
    }
} /* Imprimir os Dados dos Produtos Registrados */