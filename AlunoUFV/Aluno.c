//
// Created by Estela Miranda Batista on 19/08/18.
//
#include "Aluno.h"

/* Inserir os dados do aluno*/
void Inserir (TipoAluno* aluno, char *nome, int matricula, char *curso, double conceito, int campus){
    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    strcpy(aluno->curso, curso);
    aluno->conceito = conceito;
    aluno->campus = campus;
}

/* Imprimir os dados recebidos do aluno*/
void Imprime (TipoAluno aluno){
    printf("------------ INFO ------------\n");
    printf("Nome: %s", aluno.nome);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Curso: %s", aluno.curso);
    printf("Conceito: %.2lf\n", aluno.conceito);
    if(aluno.campus == 0){
        printf("Campus Viçosa\n");
    } else if(aluno.campus == 1){
        printf("Campus Florestal\n");
    } else if(aluno.campus == 2){
        printf("Campus Rio Parnaiba\n");
    }
    printf("------------------------------\n");
}

/* Alterar dados do aluno, neste caso o curso*/
void AlterarCurso (TipoAluno* aluno, char *curso){
    strcpy(aluno->curso, curso);
}

/* Alterar dados do aluno, neste caso o conceito*/
void AlterarConceito (TipoAluno* aluno, double conceito){
    aluno->conceito = conceito;
}