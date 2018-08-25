//
// Created by Estela Miranda Batista on 20/08/18.
//
#include "NumeroComplexo.h"

int main() {
    TipoNumero numero;
    int real, real1;
    char complexo[3];
    int op;

    /* Olhando se serão usados números complexos ou não */
    printf("O número é complexo? Sim(1) ou Não(2)");
    scanf("%d", &op);

    /* Se for número complexo, entraremos com os dados e as operações */
    if(op==1){
        printf("Digite o valor do número complexo sem o 'i': ");
        scanf("%d", &real);
        strcpy(complexo, "i");
        Atribui(&numero, real, complexo);

        printf("O que deseja fazer? Imprimir(1), Copiar(2), Somar(3) ou ver se é Real(4): ");
        scanf("%d", &op);

        /* Imprimir valor de número complexo */
        if(op==1){
            ImprimeComplexo(numero);
        }
        /* Copiar valor, e imprimir */
        else if(op==2){
            Copia(numero);
        }
        /* Somar números complexos */
        else if(op==3){
            printf("Digite o número que será somado, sem o 'i': ");
            scanf("%d", &real1);
            Soma(&numero, real1);
        }
        /* Verificar se o número é real */
        else if(op==4){
            EhReal(&numero, complexo);
        }
        /* Sáida caso digite um valor inválido */
        else {
            printf("Operação Inválida!");
        }
    }
    /* Saída caso não quiser usar valor complexo */
    else if(op==2){
        printf("Digite um número real: ");
        scanf("%d", &real);
        strcpy(complexo, " ");
        Atribui(&numero, real, complexo);

        printf("O que deseja fazer? Imprimir(1), Copiar(2), Somar(3) ou ver se é Real(4): ");
        scanf("%d", &op);

        /* Imprimir valor de número */
        if(op==1){
            ImprimeComplexo(numero);
        }
        /* Copiar valor, e imprimir */
        else if(op==2){
            Copia(numero);
        }
        /* Somar números reais */
        else if(op==3){
            printf("Digite o número que será somado: ");
            scanf("%d", &real1);
            Soma(&numero, real1);
        }
        /* Verificar se o número é real */
        else if(op==4){
            EhReal(&numero, complexo);
        }
            /* Sáida caso digite um valor inválido */
        else {
            printf("Operação Inválida!");
        }
    }
}