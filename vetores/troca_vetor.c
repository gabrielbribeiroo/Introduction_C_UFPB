/*
Ler um vetor de 16 posições. 
Troque os 8 primeiros valores pelos 8 últimos. 
Escreva ao final o vetor obtido.
*/

#include <stdio.h>

#define TAM 16 // Define uma constante TAM de valor 16 que representa o tamanho do vetor

void LeVetor(int v[], int t) {
    printf("Digite os elementos do vetor:\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]); // Leitura de todos os elementos do vetor
    }
}

void TrocaValores(int v[], int t) {
    int aux;
    for (int i=0; i<t/2; i++) {
        aux = v[i];
        v[i] = v[t-i-1]; // Inverte o vetor
        v[t-i-1] = aux;
    }
}

void MostraVetor(int v[], int t) {
    printf("\nVetor invertido:\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = %d\n", i, v[i]); // Mostra todos os elementos do vetor invertido
    }
}

int main() {
    int vetor[TAM];

    // Chamada das funções
    LeVetor(vetor, TAM);
    TrocaValores(vetor, TAM);
    MostraVetor(vetor, TAM);

    return 0;
}