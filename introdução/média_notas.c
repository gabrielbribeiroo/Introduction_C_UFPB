/*
Faça um programa que receba três notas, calcule e mostre a média aritmética das notas.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    float nota1, nota2, nota3, media;
    
    // Leitura das notas
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3; // Cálculo da média

    printf("A media das notas foi: %.2f\n", media); // Mostra a média

    return 0;
}
