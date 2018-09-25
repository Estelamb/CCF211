//
// Autores: Elida Emelly - 3012, Estela Miranda - 3305, Yuri de Faria - 3373
//

#include "TAD_Lista_de_Voos.h"

/* Estrutura para TAD Item Matriz, com os dados necessários para a estrutura */
typedef struct {
    TipoLista lista;
    int voos;
    char ult_hora[10];
} TipoItemMatriz;

/* Implementação da Inicialização da Estrutura do Item Matriz*/
void IniciarItem(TipoItemMatriz *item);

/* Funcções de Alteração e Acesso aos dados do Item Matriz */
int getVoos(TipoItemMatriz x);
void setVoos(TipoItemMatriz* item, int voo);
char* getUlt_Hora(TipoItemMatriz x);
void setUlt_Hora(TipoItemMatriz* item, char *hora);
