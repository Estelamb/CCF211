//
// Created by Estela Miranda Batista on 30/08/18.
//
#include "ContaBancaria.h"

int main() {
    TipoLista lista;
    TipoConta conta;

    int cont, i, op;
    double saq, dep;
    FlVazia(&lista);

    for(i=0; i<3; i++){
        printf("Digite o número da conta: ");
        scanf("%d", &conta.conta);

        printf("Digite o nome do cliente: ");
        getchar();
        fgets(conta.nome, 100, stdin);

        printf("Digite o CPF do cliente: ");
        scanf("%d", &conta.cpf);

        printf("Salto inicial: ");
        scanf("%lf", &conta.salto);

        Insere(conta, &lista);
    } /* Inserindo 3 novos clientes, e seus respectivos dados */

    Imprime(lista);
    /* Imprimindo dados dos clientes */

    printf("Digite a operação: (1)Saque (2)Deposito: ");
    scanf("%d", &op);

    if(op==1){
        printf("Digite o número da conta: ");
        scanf("%d", &cont);

        printf("Digite o valor do Saque: ");
        scanf("%lf", &saq);

        Saque(&lista, saq, cont);
    } else if(op==2){
        printf("Digite o número da conta: ");
        scanf("%d", &cont);

        printf("Digite o valor do Deposito: ");
        scanf("%lf", &dep);

        Deposito(&lista, dep, cont);
    } else{
        printf("Operação Inválida!\n");
    }
    /* Com base na operação desejada, e a conta que será realizada, temos retirada e entrada de valores
    e imprenssão de novos valores da conta */

}