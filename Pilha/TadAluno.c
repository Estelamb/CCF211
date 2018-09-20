//
// Created by estela on 20/09/18.
//

#include "TadAluno.h"

void IniciarAluno (TipoAluno *aluno){
    strcpy(aluno->nome, "\0");
    aluno->matricula = 0;
    strcpy(aluno->conceito, "\0");
}