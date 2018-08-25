//
// Created by Estela Miranda Batista on 21/08/18.
//
#include "Figura.h"

/* Atribuição dos valores de lados*/
void Atribui (TipoFigura* ponto, int lados){
    ponto->lados = lados;
}

/* Identificar qual o figura é a partir do número de lados*/
void Identificar (TipoFigura ponto){
    if(ponto.lados < 3){
        printf("Nao eh considerado uma figura geometrica!");
    }else if(ponto.lados == 3){
        printf("Eh um triângulo!");
    } else if(ponto.lados == 4){
        printf("Eh um Quadrilatero!");
    } else if(ponto.lados == 5){
        printf("Eh um Pentagono!");
    } else if(ponto.lados == 6){
        printf("Eh um Hexagono!");
    } else if(ponto.lados == 7){
        printf("Eh um Heptagono!");
    } else if(ponto.lados == 8){
        printf("Eh um Octagono!");
    } else if(ponto.lados == 9){
        printf("Eh um Eneagono!");
    } else if(ponto.lados == 10){
        printf("Eh um Decagono!");
    } else {
        printf("Da um google!");
    }
}