#include <stdio.h>
#include <string.h>

int main(void){
    FILE *pArquivo = NULL;
    pArquivo = fopen("remedios.txt", "r");

    char linha[100];
    char *resultado;

    resultado = fgets(linha, 100, pArquivo);

    while(resultado != NULL){
        resultado = fgets(linha, 100, pArquivo);
    }

    printf("%s\n", linha);

    fclose(pArquivo);

    return 0;
}
