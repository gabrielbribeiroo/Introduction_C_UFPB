/*
Faça um programa contendo uma função que receba 3 inteiros a, b, c, sendo a maior que 1. 
A função deverá somar todos os inteiros entre b e c, que sejam divisíveis por a (inclusive b e c).
Retorne o resultado para ser mostrado na função main().
*/

#include <stdio.h>

int soma_divisiveis (int a, int b, int c) {
    int soma = 0;
    
    for (int i = b; i < c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int num1, num2, num3;

    printf("Digite um numero: \n");
    scanf("%d", &num1);

    while (num1 <= 1) {
        printf("Digite outro numero [MAIOR QUE 1]: \n");
        scanf("%d", &num1);
    }

    printf("Digite outros dois numeros: \n");
    scanf("%d %d", &num2, &num3);

    printf("Soma dos inteiros entre %d e %d divisiveis por %d = %d\n", num2, num3, num1, soma_divisiveis(num1, num2, num3));

    return 0;
}