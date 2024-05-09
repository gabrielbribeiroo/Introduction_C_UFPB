/*
A conversão de graus Fahrenheit para Celsius é obtida por C=(F-32)/1.8. 
Faça um programa que calcule e mostre uma tabela de graus Fahrenheit em graus Celsius, 
cujos graus variem de 50 a 65 de 1 em 1.
*/
#include <stdio.h>

int main() {
    int f;
    float c;

    printf("TABELA DE CONVERSAO Fahrenheit para Celsius \n\n");

    for (f=50; f<=65; f++) {
        c = (f - 32) / 1.8; // Calcula a conversão de Fahrenheit para Celsius
        printf("Fahrenheit = %d ---------- Celsius = %.2f \n", f, c);
    }
    
    return 0;
}