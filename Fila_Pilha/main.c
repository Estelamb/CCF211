#include "Fila.h"

int main() {
    TipoPalavra Palavra;
    TipoPilha Pilha;
    TipoFila Fila;

    int i, op;
    char palavra[20];

    while (1>0){
        printf("O QUE DESEJA?\n");
        printf("< 0 > SAIR\n");
        printf("< 1 > NOVA INVERSÃO DE PALAVRA\n");
        printf("OPERACAO: ");
        scanf("%d", &op);

        if(op == 0){
            break;
        } else if(op == 1){
            PilhaVazia(&Pilha);
            FilaVazia(&Fila);

            printf("Digite uma Palavra: ");
            scanf("%s", palavra);

            for(i = 0; i<strlen(palavra); i++){
                IniciarPalavra(&Palavra);
                Palavra.letra = palavra[i];
                Empilha(&Pilha, &Palavra);
            }

            Enfileirar(&Fila, &Pilha, &Palavra);

            printf("------------ PALAVRA CERTA -----------\n");
            printf("%s\n", palavra);
            printf("---------------------------------------\n");
            printf("---------- PALAVRA INVERTIDA ----------\n");
            Imprimir(Fila);
            printf("\n---------------------------------------\n");

            Desimpilha(&Pilha, &Palavra);
            Desinfileirar(&Fila, &Pilha, &Palavra);
        }
    }
}