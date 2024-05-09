/*
Faça um programa que calcule e mostre o valor de S
*/

#include <stdio.h>

int main() {
    float numerador=1, denominador=1, soma=0; // Inicializa o numerador e o denominador com 1
    
    
    while ((numerador <= 99) && (denominador <= 50)) {
        soma = soma + (numerador/denominador); // Soma-se os valores da sequência
        numerador = numerador + 2; // O numerador aumenta de 2 em 2
        denominador = denominador + 1; // O denominador aumenta de 1 em 1
    }

    printf("Valor de S = %.2f\n", soma); // Mostra o valor da soma
    
    return 0;
}