/*
Escreva um programa que leia um número indeterminado de valores (até que o usuário digite o zero). 
Calcule e mostre:
    a soma dos números;
    a média dos números lidos;
    o maior e o menor número dentre eles;
    a quantidade de números negativos.
*/
#include <stdio.h>

int main() {
    int num, soma=0, qnt_num=0, maior, menor, qnt_negativos=0;
    float media;

    printf("Digite um numero [0 p/ PARAR]: \n");
    scanf("%d", &num);
    maior = menor = num;

    while (num != 0) {
        soma = soma + num; // Soma-se os números digitados
        qnt_num++; // Aumenta a quantidade de números lidos de 1 em 1
        if (num > maior) {
            maior = num; // Atualiza o valor do maior
        } 
        if (num < menor) {
            menor = num; // Atualiza o valor do menor
        }
        if (num < 0) {
            qnt_negativos++; // Aumenta a quantidade de números negativos de 1 em 1 
        }
        printf("Digite outro numero [0 p/ PARAR]: \n");
        scanf("%d", &num); // Lê outro número para repetir o looping
    }

    // Mostra as informações solicitadas
    printf("Soma dos numeros: %d\n", soma);
    media = (float) soma / qnt_num;
    printf("Media dos numeros: %.2f\n", media);
    printf("Maior numero: %d\n", maior); 
    printf("Menor numero: %d\n", menor);
    printf("Quantidade de numeros negativos: %d\n", qnt_negativos);

    return 0;
}