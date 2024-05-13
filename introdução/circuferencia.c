/*
 Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = πR2.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1416 // Define uma constante pi de valor 3.1416

int main () {
    float raio, area;

    printf("Digite o raio da circuferencia: \n");
    scanf("%f", &raio); // Lê o raio

    area = PI * pow(raio, 2); // Calcula a área 
    printf("Area do circulo: %.2f\n", area); // Mostra a área

    return 0;
}