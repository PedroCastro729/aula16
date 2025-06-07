#include <stdio.h>
#include <string.h>

struct filme{
    char nome[50];
    char genero[50];
    int ano;
};

int main(void){
    struct filme movie;
    char titulo[50];
    char estilo[50];
    int lancamento;
    FILE *ptrFilmes = NULL;

    printf("Digite o nome do filme: ");
    fgets(titulo, 49, stdin);

    printf("Digite o estilo do filme: ");
    fgets(estilo, 49, stdin);

    printf("Digite o ano de lançamento: ");
    scanf("%d", &lancamento);

    ptrFilmes = fopen("filmes.txt", "wb");
    if(ptrFilmes == NULL){
        printf("Erro ao abrir o arquivo!\n");
    } else{
        fwrite(&movie, sizeof(struct filme), 1, ptrFilmes);
    }

    fclose(ptrFilmes);

    return 0;
}