/*
Faça um programa que mostre se um número é par ou ímpar utilizando uma função. 
A função retorna 0, se o número for par, ou 1, se o número for ímpar.
*/

#include <stdio.h>

int ParImpar (int a) {
    if (a % 2 == 0) {
        return 0; // Número par
    }
    else {
        return 1; // Número ímpar
    }
}

int main() {
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if (num == 0) {
        printf("0 eh elemento neutro. Tente novamente! \n");
    }

    else {
        int tipo = ParImpar(num); // Atribui o valor retornado da função à uma varíavel tipo
        if (tipo == 0) { // Verifica o tipo para mostrar a mensagem
            printf("O numero %d eh PAR. \n", num);
        }
        else {
            printf("O numero %d eh IMPAR. \n", num);
        }
    }

    return 0;
}