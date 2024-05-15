/*
Faça um programa para ler um número inteiro (considere que serão lidos apenas valores positivos e inteiros).
Escrever se o número é par ou é ímpar.
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero); // Lê um número

    // Verifica se um número é par ou ímpar
    if (numero % 2 == 0){
        printf("O numero %d eh PAR. \n", numero);
    }
    else {
        printf("O numero %d eh IMPAR. \n", numero);
    }
    return 0;
}