/*
Fazer um programa para calcular e mostrar o valor de S. 
Mostrar também a sequência: S = 1 + ½ + 1/3 + ¼ + ... + 1/50.
*/

#include <stdio.h>

int main() {
    float s = 0;

    printf("Sequencia de S: 1");

    for (int i = 2; i <= 50; i++) {
        s = s + (1.0/i);
        printf(" + 1/%d", i);
    }

    printf("\n\n Valor de S = %.2f\n", s+1);

    return 0;
}