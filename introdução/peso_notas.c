/*
Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada das notas.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;
    printf("Digite a primeira nota e o seu respectivo peso: \n");
    scanf("%f %d", &nota1, &peso1);
    printf("Digite a segunda nota e o seu respectivo peso: \n");
    scanf("%f %d", &nota2, &peso2);
    printf("Digite a terceira nota e o seu respectivo peso: \n");
    scanf("%f %d", &nota3, &peso3);

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);

    printf("A media das notas digitadas foi: %.2f\n", media);

    return 0;
}