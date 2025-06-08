#include <stdio.h>
#include <string.h>

struct filme{
    char nome[50];
    char genero[50];
    int ano;
};

int main(void){
    struct filme movie;
    FILE *ptrFilmes = NULL;

    printf("Digite o nome do filme: ");
    fgets(movie.nome, 49, stdin);

    printf("Digite o estilo do filme: ");
    fgets(movie.genero, 49, stdin);

    printf("Digite o ano de lançamento: ");
    scanf("%d", &movie.ano);
    getchar();

    ptrFilmes = fopen("filmes.txt", "wb");
    if(ptrFilmes == NULL){
        printf("Erro ao abrir o arquivo!\n");
    } else{
        fwrite(&movie, sizeof(struct filme), 1, ptrFilmes);
    }

    fclose(ptrFilmes);

    return 0;
}
