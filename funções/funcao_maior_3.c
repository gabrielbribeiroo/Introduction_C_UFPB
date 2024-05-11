/*
Crie um programa contendo uma função que receba 3 números e retorne o maior valor. 
Atenção: use a função escrita da questão 2.
*/

#include <stdio.h>

// Protótipo de funções
int CalculaMaior (int a, int b);
int MaiorDe3 (int a, int b, int c);


int main() {
    int num1, num2, num3;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compara os 3 valores digitados
    if ((num1 == num2) && (num2 == num3)) {
        printf("Os numeros sao iguais. Tente novamente! \n");
    }
    else {
        printf("Maior valor = %d\n", MaiorDe3(num1, num2, num3));
    }

    return 0;
}

int CalculaMaior (int a, int b) {
    // Retorna o maior valor dos números
    if (a > b) {
        return a;
    }
    else {
        return b;
    }

}

int MaiorDe3 (int a, int b, int c) {
    return CalculaMaior(CalculaMaior(a, b), c); // Retorna o maior valor dos números
}