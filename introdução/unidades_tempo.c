/*
Faça um programa que receba um número inteiro representando a quantidade de segundos.
Calcule e mostre a quantidade de horas, minutos e segundos que esse número representa. 
Por exemplo, o número 5984 corresponde a 1 hora 39 minutos e 44 segundos.
*/

#include <stdio.h>

int main() {
    int segundos, segundos_sobras, minutos, horas;

    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &segundos); // Lê os segundos

    // Transforma as unidades de tempo
    horas = segundos / 3600;
    segundos_sobras = segundos % 3600;
    minutos = segundos_sobras / 60;
    segundos_sobras = segundos_sobras % 60;

    printf("Quantidade de tempo: %d hora(s) e %d minuto(s) e %d segundo(s) \n", horas, minutos, segundos_sobras); // Mostra o horário exato
    return 0;
}