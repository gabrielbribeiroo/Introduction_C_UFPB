/*
Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
    a. O número digitado ao quadrado;
    b. O número digitado ao cubo;
    c. A raiz quadrada do número digitado;
    d. A raiz cúbica do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main () {
    float numero;
    printf("Digite um numero positivo e maior que 0: \n");
    scanf("%f", &numero);
    printf("Quadrado: %.2f\n", pow(numero, 2));
    printf("Cubo: %.2f\n", pow(numero, 3));
    printf("Raiz Quadrada: %.2f\n", sqrt(numero));
    printf("Raiz Cubica: %.2f\n", pow(numero, 1.00/3));

    return 0;
}