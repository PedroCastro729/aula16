#include <stdio.h>
#include <string.h>

int main(void){
    char titulo_do_livro[50];
    char destino[50];
    char opcao;
    char *resultado;
    
    printf("Digite o titulo do livro: ");
    fgets(titulo_do_livro, 50, stdin);
    strcat(titulo_do_livro, ".txt");

    FILE *ptrLivro = NULL;
    ptrLivro = fopen(titulo_do_livro, "r");

    if(ptrLivro == NULL){
        printf("O arquivo não existe!\n");
    } else{
        do{
            printf("Digite P para o proximo personagem e F para finalizar: ");
            opcao = getchar();

            if(opcao == 'P' || opcao == 'p'){
                resultado = fgets(destino, 50, ptrLivro);
                printf("%s", destino);
            }
        } while(opcao != 'F' && opcao != 'f' && resultado != NULL);
    }

    fclose(ptrLivro);

    return 0;
}