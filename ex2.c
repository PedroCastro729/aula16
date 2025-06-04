#include <stdio.h>
#include <string.h>

int main(void) {
    char titulo_do_livro[50];
    char personagem[50];

    printf("Titulo do livro: ");
    fgets(titulo_do_livro, 49, stdin);
    strcat(titulo_do_livro, ".txt");

    FILE *pArquivo = NULL;
    pArquivo = fopen(titulo_do_livro, "a");

    do{
        printf("Digite o nome do personagem (ou . para sair): ");
        fgets(personagem, 49, stdin);

        if(personagem[0] != '.'){
            fprintf(pArquivo, "%s", personagem);
        } else{
            break;
        }
    } while(personagem[0] != '.');

    fclose(pArquivo);

    return 0;
}  