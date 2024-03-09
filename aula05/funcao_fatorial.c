/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N, e retorna o valor de S.
S = 1 + 1/1! + 1/2! + 1/3! + 1/N!
    • Use a função fatorial já apresentada para determinar o valor de S;
    • Escreva uma função que mostre a sequencia S como formatada acima.
*/

#include <stdio.h>

int CalculaFatorial (int num) {
    if ((num == 0) || (num == 1)) {
        return 1;
    }
    else {
        return num * CalculaFatorial(num-1);
    }
}

float S (int N) {
    float s = 1;

    printf("Sequencia de S: 1");

    for (int i = 1; i <= N; i++) {
        s = s + (1.0/CalculaFatorial(i));
        printf(" + 1/%d!", i);
    }

    return s;
}

int main() {
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    printf("\n\n Valor de S = %.4f\n", S(num));

    return 0;
}