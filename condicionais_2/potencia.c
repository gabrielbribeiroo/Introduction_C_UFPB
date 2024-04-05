/*
Escreva um programa que calcule kn, as n primeiras potências do número k. 
Por exemplo, para n = 3 e k = 2 teremos:
    2 elevado a 1 = 2
    2 elevado a 2 = 4
    2 elevado a 3 = 8
Agora que você fez o seu programa utilizando a estrutura de repetição for, você pode usar a função pow(k,n), 
que calcula kn. 
Você deve usar #include <math.h> no começo do programa.
*/ 

#include <stdio.h>
#include <math.h>

int main() {
    int k, n;

    printf("Digite o numero da potencia: \n");
    scanf("%d", &k);
    printf("Digite a quantidade de potências: \n");
    scanf("%d", &n);

    printf("As %d primeiras potencias de %d sao: \n", n, k);

    for (int i = 1; i <= n; i++) {
        double resultado = pow(k,i);
        printf("%d elevado a %d = %.0f\n", k, i, resultado);
    }
    return 0;
}