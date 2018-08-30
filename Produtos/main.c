//
// Created by Estela Miranda Batista on 29/08/18.
//
#include "Produtos.h"

int main() {
    TipoLista lista;
    TipoProduto produto;

    int cod, vezes, cont=0, codi;
    FlVazia(&lista);

    printf("Quantos Produtos serão registrados? ");
    scanf("%d", &vezes);

    while(cont<vezes){
        printf("Digite o Código do Produto: ");
        scanf("%d", &produto.codigo);

        printf("Digite o nome do Produto: ");
        getchar();
        fgets(produto.produto, 100, stdin);

        printf("Digite o preço do Produto: ");
        scanf("%lf", &produto.preco);

        Insere(produto, &lista);
        cont++;
    } /* Inserindo dados na lista, através da leitura dos dados */

    Imprime(lista);
    /* Imprimindo dados recebidos do usuário */

    printf("Quantos Produtos deseja ver o valor? ");
    scanf("%d", &vezes);
    cont = 0;

    while(cont<vezes){
        printf("Digite o código do produto: ");
        scanf("%d", &codi);

        Preco(lista, codi);
        cont++;
    } /* Fazendo Verificação de Preço de Produtos através do código */
}