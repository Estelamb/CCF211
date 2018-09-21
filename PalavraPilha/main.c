#include "Pilha.h"

int main(){
    TipoPalavra palavra1;
    TipoPilha pilha;
    char palavra[20];
    int i, op;

    while (1>0){
        printf("O QUE DESEJA?\n");
        printf("< 0 > SAIR\n");
        printf("< 1 > NOVA INVERSÃO DE PALAVRA\n");
        printf("OPERACAO: ");
        scanf("%d", &op);

        if(op == 0){
            break;
        } else if(op == 1){
            printf("DIGITE UMA PALAVRA: ");
            scanf("%s", palavra);

            PilhaVazia(&pilha);

            for(i=0; i<(strlen(palavra)); i++){
                IniciarPalavra(&palavra1);
                palavra1.letra = palavra[i];
                Empilha(&pilha, &palavra1);
            }
            printf("------------ PALAVRA CERTA -----------\n");
            printf("%s\n", palavra);
            printf("---------------------------------------\n");

            printf("---------- PALAVRA INVERTIDA ----------\n");
            for(i=0; i<(strlen(palavra)); i++){
                Desimpilha(&pilha, &palavra1);
            }
            printf("\n---------------------------------------\n");
        }
    }
}