/*
Faça um programa que calcule a soma dos primeiros 100 números pares, e mostre o resultado.
*/

#include <stdio.h>

int main() {

    int soma_pares = 0;

    for (int i=0; i<202; i++) {
        if (i % 2 == 0) {
            soma_pares += i; // Soma os 100 primeiros números pares
        }
    }
    
    printf("Soma dos 100 primeiros numeros pares = %d \n", soma_pares);

    return 0;
}