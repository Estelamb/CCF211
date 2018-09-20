#include <stdio.h>
#include <string.h>
int main() {
    FILE *f = fopen("teste.txt", "r");
    int pista;
    char palavra[50], hora[10], op;
    while (fscanf(f, "%s", palavra) == 1){
        if(strcmp(palavra, "b") == 0){
            fscanf(f, "%s", palavra);
            strcpy(hora, palavra);
            printf("%s\n", hora);

            fscanf(f, "%s", palavra);
            strcpy(hora, palavra);
            printf("%s\n", hora);

            fscanf(f, "%s", palavra);
            strcpy(hora, palavra);
            printf("%s\n", hora);

            fscanf(f, "%s", palavra);
            strcpy(hora, palavra);
            printf("%s\n", hora);

            fscanf(f, "%s", palavra);
            pista = (palavra[0] - '0');
            printf("%d\n\n", pista);
        } else if(strcmp(palavra, "c") == 0){
            fscanf(f, "%s", palavra);
            pista = ((palavra[0] - '0')*10) + (palavra[1] - '0');
            printf("%d\n\n", pista);
        } else if(strcmp(palavra, "d") == 0){
            fscanf(f, "%s", palavra);
            pista = ((palavra[0] - '0')*10) + (palavra[1] - '0');
            printf("%d\n\n", pista);
        } else if(strcmp(palavra, "e") == 0){
            fscanf(f, "%s", palavra);
            strcpy(hora, palavra);
            printf("%s\n", hora);

            fscanf(f, "%s", palavra);
            strcpy(hora, palavra);
            printf("%s\n\n", hora);
        } else if(strcmp(palavra, "f") == 0){
            fscanf(f, "%s", palavra);
            strcpy(hora, palavra);
            printf("%s\n\n", hora);
        } else if(strcmp(palavra, "g") == 0){
            fscanf(f, "%s", palavra);
            strcpy(hora, palavra);
            printf("%s\n\n", hora);
        } else if(strcmp(palavra, "h") == 0){
            printf("%s\n\n", palavra);
        } else if(strcmp(palavra, "i") == 0){
            printf("%s\n\n", palavra);
        } else if(strcmp(palavra, "j") == 0){
            printf("%s\n\n", palavra);
        } else if(strcmp(palavra, "k") == 0){
            printf("%s\n\n", palavra);
        } else if(strcmp(palavra, "l") == 0){
            printf("%s\n\n", palavra);
        } else if(strcmp(palavra, "m") == 0){
            printf("%s\n\n", palavra);
        }
    }
    fclose(f);
}