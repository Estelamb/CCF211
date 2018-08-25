//
// Created by Estela Miranda Batista on 20/08/18.
//
#include "NumeroComplexo.h"

void Atribui (TipoNumero* numero, int real, char *complexo){
    numero->real = real;
    strcpy(numero->complexo, complexo);
}

void ImprimeComplexo (TipoNumero numero){
    printf("Número: %d", numero.real);
    printf("%s", numero.complexo);
}

void Copia (TipoNumero numero){
    int aux;
    aux = numero.real;
    printf("Número Copiado: %d%s", aux, numero.complexo);
}

void Soma (TipoNumero* numero, int real1){
    int soma;
    numero->real1 = real1;
    soma = numero->real + numero->real1;
    printf("Soma: %d", soma);
    printf("%s", numero->complexo);
}

void EhReal (TipoNumero* numero, char *complexo){
    strcpy(numero->complexo, complexo);
    if(strlen(numero->complexo) == 0){
        printf("Eh Real!");
    } else{
        printf("Eh Complexo!");
    }
}