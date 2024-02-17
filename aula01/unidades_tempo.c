#include <stdio.h>

int main() {
    int segundos, segundos_sobras, minutos, horas;
    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos_sobras = segundos % 3600;
    minutos = segundos_sobras / 60;
    segundos_sobras = segundos_sobras % 60;

    printf("Quantidade de tempo: %d hora(s) e %d minuto(s) e %d segundo(s) \n", horas, minutos, segundos_sobras);
    return 0;
}