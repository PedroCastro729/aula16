#include <stdio.h>
#include <string.h>

int main(void){
    char data[20];
    char horario[20];

    printf("Digite a data: ");
    scanf("%s", data);
    getchar();

    printf("Digite o horario: ");
    scanf("%s", horario);
    getchar();

    FILE *ptrArquivo = NULL;
    ptrArquivo = fopen("remedios.txt", "a");

    fprintf(ptrArquivo, "%s %s", data, horario);

    fclose(ptrArquivo);

    return 0;
}