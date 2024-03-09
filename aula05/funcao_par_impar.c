/*
Faça um programa que mostre se um número é par ou ímpar utilizando uma função. 
A função retorna 0, se o número for par, ou 1, se o número for ímpar.
*/

#include <stdio.h>


int ParImpar (int a) {
    if (a % 2 == 0) {
        return 0;
    }
    else {
        return 1;
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
        int tipo = ParImpar(num);
        if (tipo == 0) {
            printf("O numero %d eh PAR. \n", num);
        }
        else {
            printf("O numero %d eh IMPAR. \n", num);
        }
    }

    return 0;
}