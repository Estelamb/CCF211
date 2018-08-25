//
// Created by Estela Miranda Batista on 21/08/18.
//
#include "Ponto.h"

int main() {
    TipoPonto ponto;
    int x, y;

    /* Receber os valores que serão analisados*/
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    /* Atribuição de valores, imprimir pontos x e y e a qual quadrante pertence */
    Atribui(&ponto, x, y);
    ImprimeX(ponto);
    ImprimeY(ponto);
    Quadrante(ponto);
}