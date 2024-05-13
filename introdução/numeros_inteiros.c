/*
Faça um programa que receba dois números inteiros, calcule e mostre:
    a. A divisão do primeiro número pelo segundo;
    b. O resto da divisão entre eles.
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros [N1 > N2]: \n");
    scanf("%d %d", &num1, &num2); // Lê os números

    // Mostra as operações de divisão    
    printf("Divisao: %d / %d = %d \n", num1, num2, num1/num2);
    printf("Resto da divisao inteira: %d // %d = %d \n", num1, num2, num1%num2);

    return 0;
}