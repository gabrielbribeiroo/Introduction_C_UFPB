/*
Escreva um programa que leia dois números e utilize uma função que retorne o maior valor. 
Mostre o resultado.
*/

#include <stdio.h>

int CalculaMaior (int a, int b) {
    // Verifica qual o maior número e retorna-o
    if (a > b) {
        return a;
    }
    else {
        return b;
    }

}

int main() {
    int num1, num2;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &num1, &num2); 

    // Compara os valores digitados
    if (num1 == num2) {
        printf("Os numeros sao iguais. Tente novamente! \n");
    }
    else {
        printf("Maior valor = %d\n", CalculaMaior(num1, num2));
    }
    
    return 0;
}