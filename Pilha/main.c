#include "TadPilha.h"

int main() {
    TipoAluno aluno;
    TipoPilha pilha;
    int op, num;

    while (1>0){
        printf("< 0 > Inserir novo aluno\n");
        printf("< 1 > Imprimir alunos\n");
        printf("< 2 > Numero de Alunos Cadastrados\n");
        printf("< 3 > Limpar Pilha de alunos\n");
        printf("< 4 > Sair\n");
        scanf("%d", &op);

        if(op == 0){
            IniciarAluno(&aluno);

            printf("Nome: ");
            scanf("%s", aluno.nome);

            printf("Matricula: ");
            scanf("%d", &aluno.matricula);

            printf("Conceito: ");
            scanf("%s", aluno.conceito);

            Empilha(&pilha, &aluno);

        } else if(op == 1){
            Imprime(pilha);
        } else if(op == 2){
            num = PilhaTamanho(&pilha);

            printf("------------ INFO ------------\n");
            printf("Temos %d alunos matriculados!\n", num);
            printf("------------------------------\n");

        } else if(op == 3){
            Desimpilha(&pilha, &aluno);

            if(PilhaEhVazia(&pilha) == 0){
                printf("------------ INFO ------------\n");
                printf("A pilha esta vazia!\n");
                printf("------------------------------\n");
            }
        } else if(op == 4){
            break;
        }
    }
}