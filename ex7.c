#include <stdio.h>
#include <string.h>

struct filme{
    char nome[50];
    char genero[50];
    int ano;
};

int main(void){
    struct filme retorno;

    FILE *pArquivo = NULL;
    pArquivo = fopen("filmes.txt", "rb");

    fread(&retorno, sizeof(struct filme), 1, pArquivo);

    fclose(pArquivo);

    printf("Nome: %s", retorno.nome);
    printf("Genero: %s", retorno.genero);
    printf("Ano: %d\n", retorno.ano);

    return 0;
}
