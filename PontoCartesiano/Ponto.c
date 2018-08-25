//
// Created by Estela Miranda Batista on 21/08/18.
//
#include "Ponto.h"

/* Atribuição de valores */
void Atribui (TipoPonto* ponto, int x, int y){
    ponto->x = x;
    ponto->y = y;
}

/* Imprime o valor de x */
void ImprimeX (TipoPonto ponto){
    printf("Ponto X: %d ", ponto.x);
}

/* Imprime o valor de y */
void ImprimeY (TipoPonto ponto){
    printf("Ponto Y: %d\n", ponto.y);
}

/* Imprime a qual quadrante pertence os pontos */
void Quadrante (TipoPonto ponto){
    if(ponto.x > 0 && ponto.y >0){
        printf("Primeiro Quadrante!\n");
    } else if(ponto.x < 0 && ponto.y >0){
        printf("Segundo Quadrante!\n");
    } else if(ponto.x < 0 && ponto.y < 0){
        printf("Terceiro Quadrante!\n");
    } else if(ponto.x > 0 && ponto.y < 0){
        printf("Quarto Quadrante!\n");
    } else{
        printf("Estão centrados em zero!\n");
    }
}