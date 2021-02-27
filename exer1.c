#include <stdio.h>
#include <stdlib.h>

int convertehora(int totalMinutos, int *horas, int *minutos) {
    *horas = totalMinutos / 60;
    *minutos = (totalMinutos % 60) / 60;
}

int main(int argc, char** argv) {
    int totalMinutos;
    int *hora;
    int *minutos;
    printf("Insira o total de minutos: \n");
    scanf("%d", &totalMinutos);
    convertehora(totalMinutos, &hora, &minutos);
    printf("%dh:%dm", hora, minutos);

    return (EXIT_SUCCESS);
}

