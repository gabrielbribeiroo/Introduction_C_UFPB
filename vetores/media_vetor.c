/*
Calcular a média dos elementos de um vetor de 10 posições.
*/

#include <stdio.h>

#define TAM 10

void LeVetor(int v[], int t) {
    printf("Digite os elementos do vetor...\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

int SomaVetor(int v[], int t) {
    int i, s = 0;

    for (i=0; i<t; i++) {
        s += v[i];
    }

    return s;
}

float MediaVetor(int s, int t) {
    float m;

    m = (float) s / t;

    return m;
}

int main() {
    int vetor[TAM], soma;
    float media;

    LeVetor(vetor, TAM);

    soma = SomaVetor(vetor, TAM);
    media = MediaVetor(soma, TAM);

    printf("\nSoma dos elementos do vetor: %d\n", soma);
    printf("Media dos elementos do vetor: %.2f\n", media);

    return 0;
}