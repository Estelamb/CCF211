//
// Created by Estela Miranda Batista on 21/08/18.
//
#include "Figura.h"

int main() {
    TipoFigura figura;
    int lados;

    /* Entrar com lados da Figura*/
    printf("Digite o número de lados da forma: ");
    scanf("%d", &lados);

    /* Atribuir valores ao TAD e Imprimir qual figura é*/
    Atribui(&figura, lados);
    Identificar(figura);
}