/*
Faça uma função que receba como argumento os valores dos lados de um triângulo. 
A função deverá retornar:
    - 0 se o triângulo for equilátero (os 3 lados iguais);
    - 1 se for isósceles (2 lados iguais);
    - 2 se for escaleno (os 3 lados diferentes).
*/

#include <stdio.h>

int LadosTriangulo(float a, float b, float c) {
    if ((a == b) && (b == c)) {
        return 0; // Triângulo equilátero
    }
    else {
        if ((a == b) || (a == c) || (b == c)) {
            return 1; // Triângulo isósceles
        }
        else {
            return 2; // Triângulo escaleno
        }
    }
}

int main() {
    float lado1, lado2, lado3;

    printf("Digite o comprimento dos tres lados do triangulo: \n");
    scanf("%f %f %f", &lado1, &lado2, &lado3); // Lê os valores dos lados do triângulo

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) { // Verifica a condição de existência de um triângulo
        int tipo = LadosTriangulo(lado1, lado2, lado3); // Chamada da função
        switch (tipo)
        {
        case 0: 
            printf("Eh um triangulo equilatero. \n");
            break;
        case 1:
            printf("Eh um triangulo isosceles. \n");        
            break;
        default:
            printf("Eh um triangulo escaleno. \n");
            break;
        }
    }
    else {
        printf("Os lados nao formam um triangulo. Tente novamente! \n");
    }

    return 0;
}