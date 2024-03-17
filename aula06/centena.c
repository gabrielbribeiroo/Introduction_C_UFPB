/*
Escreva um programa que leia uma sequência de números inteiros, por meio do teclado (até que seja digitado 0) e,
para cada um dos números, mostre seu dígito das centenas.
Este valor deve ser obtido através da função centena(), que recebe como parâmetro um número inteiro n e 
retorna o dígito das centenas em n. 
*/

#include <stdio.h>

int centena(int *n) {
    int c = (*n / 100) % 10;
    return c;
}


int main() {
    int num;

    printf("Digite um numero [0 PARA ENCERRAR]:\n");

    do{
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        printf("O digito das centenas de %d eh: %d\n", num, centena(&num));
        printf("Digite outro numero [0 PARA ENCERRAR]:\n");
    }while(num!=0);
    
    return 0;
}