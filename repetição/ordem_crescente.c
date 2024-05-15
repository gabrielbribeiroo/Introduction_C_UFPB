/*
Escreva um programa que leia 3 números inteiros e mostre-os em ordem crescente.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, maior, meio, menor;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &num1, &num2, &num3); // Lê 3 números

    // Ordenação dos 3 números
    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
        if (num2 >= num3) {
            meio = num2;
            menor = num3;
        } else {
            meio = num3;
            menor = num2;
        }
    }
    else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
        if (num1 >= num3) {
            meio = num1;
            menor = num3;
        } else {
            meio = num3;
            menor = num1;
        }
    }
    else {
        maior = num3;
        if (num1 >= num2) {
            meio = num1;
            menor = num2;
        } else {
            meio = num2;
            menor = num1;
        }
    }

    printf("Ordem Crescente dos valores digitados: %d < %d < %d \n", menor, meio, maior); // Mostra os 3 valores em ordem crescente

    return 0;
}