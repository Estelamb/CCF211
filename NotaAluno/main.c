//
// Created by Estela Miranda Batista on 29/08/18.
//
#include "Aluno.h"

int main() {
    TipoLista lista;
    TipoAluno aluno;

    int cont=0, vezes;
    FLVazia(&lista);

    printf("Quantos Alunos Serão Inscritos? ");
    scanf("%d", &vezes);

    /* Inserindo caracteristicas de aluno na struct "TipoAlunoo" e transferindo os dados para a Lista
     através da função Insere */
    while(cont<vezes){
        printf("Digite o nome do Aluno: ");
        getchar();
        fgets(aluno.nome, 100, stdin);

        printf("Digite a matrícula: ");
        scanf("%d", &aluno.matricula);

        printf("Digite as duas notas: ");
        scanf("%lf %lf", &aluno.nota1, &aluno.nota2);

        Insere(aluno, &lista);
        cont++;
    }

    Imprime(lista);
}