/*
Escreva uma função que receba um numero inteiro positivo representando os segundos e converta-o 
para horas, minutos e segundos.
*/

#include <stdio.h>

void UnidadesDeTempo(int seg, int *sob, int *m, int *h) {
    // Tranformação para as unidades de tempo
    *h = seg / 3600;
    *sob = seg % 3600;
    *m = *sob / 60;
    *sob = *sob % 60;
}

int main() {
    int segundos, sobras, minutos, horas;
    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &segundos); // Lê a quantidade de segundos

    UnidadesDeTempo(segundos, &sobras, &minutos, &horas); // Chamada de função

    printf("Quantidade de tempo:\n"
           "%d hora(s) e %d minuto(s) e %d segundo(s)\n", horas, minutos, sobras); // Mostra a quantidade de tempo

    return 0;
}