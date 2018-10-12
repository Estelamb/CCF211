//
// Created by estela on 12/10/18.
//

#include "Paciente.h"

void IniciarPaciente(TipoPaciente *paciente){
    strcpy(paciente->nome, "\0");
    paciente->idade = 0;
    strcpy(paciente->sexo, "\0");
}