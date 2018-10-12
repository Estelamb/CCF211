#include "Fila.h"

int main(){
    TipoPaciente Paciente;
    TipoFila Fila;

    int op;

    FFVazia(&Fila);
    while (1>0){
        printf("-- SISTEMA DE ESPERA DE PACIENTES --\n");
        printf("0 - INSERIR NOVO PACIENTE\n");
        printf("1 - VER LISTA DE PACIENTES\n");
        printf("2 - VER PROXIMO PACIENTE\n");
        printf("3 - LIMPAR LISTA DE ESPERA\n");
        printf("4 - SAIR");
        printf("------------------------------------\n");
        printf("OPERACAO: ");
        scanf("%d", &op);

        if(op == 0){
            IniciarPaciente(&Paciente);

            getchar();
            printf("NOME: ");
            fgets(Paciente.nome, 200, stdin);

            printf("SEXO: ");
            scanf("%s", Paciente.sexo);

            printf("IDADE: ");
            scanf("%d", &Paciente.idade);

            Enfileira(Paciente, &Fila);
        } else if(op == 1){
            printf("\n------- INFO -------\n");
            ImprimirFila(Fila);

        } else if(op == 2){
            ProximoPaciente(&Fila, &Paciente);

        } else if(op == 3){
            Desenfileira(&Fila, &Paciente);

        } else if(op == 4){
            break;
        }
    }
}