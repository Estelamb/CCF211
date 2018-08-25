//
// Created by Estela Miranda Batista on 19/08/18.
//
#include "Aluno.h"

int main() {
    TipoAluno aluno;
    char nome[100];
    int matricula;
    char curso[100];
    double conceito;
    int op, x=0, ops;
    int campus;

    /*Recebendo dados do novo aluno */
    printf("Digite o nome do aluno: ");
    fgets(nome,100,stdin);

    printf("Digite a Matrícula do aluno: ");
    scanf("%d", &matricula);
    getchar();

    printf("Digite o curso do aluno: ");
    fgets(curso,100,stdin);

    printf("Digite o conceito do aluno: ");
    scanf("%lf", &conceito);

    printf("Campus: Vicosa(0) Florestal(1) Rio Parnaiba(2): ");
    scanf("%d", &campus);

    Inserir(&aluno, nome, matricula, curso, conceito, campus);

    /* Verificando se é necessário alguma alteração, caso não, apenas imprimir dados*/
    printf("É necessário alguma alteração? Se sim, digite 1, se não qualquer valor: ");
    scanf("%d", &op);

    if(op==1){
        printf("Quantas operações são necessárias?");
        scanf("%d", &ops);

        while(x<ops) {
            printf("O que deseja alterar? Curso (1) ou Conceito (2) ");
            scanf("%d", &op);

            if(op==1){
                getchar();
                printf("Digite o novo curso: ");
                fgets(curso,100,stdin);
                AlterarCurso(&aluno, curso);
                printf("Novos dados do aluno:\n");
                Imprime(aluno);
            } else if(op==2){
                printf("Digite o novo conceito: ");
                scanf("%lf", &conceito);
                printf("Novos dados do aluno:\n");
                AlterarConceito(&aluno, conceito);
                Imprime(aluno);
            } else {
                printf("Operação Inválida!\n");
                Imprime(aluno);
            }
            x++;
        }
    } else {
        printf("Dados do aluno:\n");
        Imprime(aluno);
    }
}