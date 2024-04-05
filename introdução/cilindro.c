/*
 Fazer um programa que calcule e mostre a área e o volume de um cilindro. 
 Sabe-se que A = 2πr(h+r) e V=πr²h.
*/

#include <stdio.h>
#include <math.h>

#define pi 3.1416

int main() {
    float area, volume, raio, altura;
    printf("|----------CILINDRO----------|\n");
    printf("Digite o raio do cilindro: \n");
    scanf("%f", &raio);
    printf("Digite a altura do cilindro: \n");
    scanf("%f", &altura);

    area = 2 * pi * raio * (altura + raio);
    volume = pi * pow(raio,2) * altura;

    printf("Area do cilindro: %.2f\n", area);
    printf("Volume do cilindro: %.2f\n", volume);

    return 0;
}