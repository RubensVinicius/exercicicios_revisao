#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char c;
    int contador = 0;

    FILE *arq;
    arq = fopen("entrada.txt", "r");
    if (arq == NULL) {
        printf("Erro na abertura do arquivo de entrada.\n");
        system("pause");
        exit(1);
    } else {
        printf("Abertura bem sucedida do arquivo de entrada.\n");
    }

    FILE *arq2;
    arq2 = fopen("saida.txt", "w");
    if (arq2 == NULL) {
        printf("Erro na abertura de saida.\n");
        system("pause");
        exit(1);
    } else {
        printf("Abertura bem sucedida do arquivo de saida.\n");
    }

    c = fgetc(arq);
    while (c != EOF) {
        if (c == '\n'){
            contador++;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            c = '*';
            fputc(c, arq2);
        }else{
            fputc(c, arq2);
        }
        c= fgetc(arq);
    }
printf("Numero de linhas: %d", contador);
    fclose(arq);
    fclose(arq2);
    return (EXIT_SUCCESS);
}
