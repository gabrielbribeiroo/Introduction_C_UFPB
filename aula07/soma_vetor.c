/*
Calcular a soma dos elementos de um vetor de 10 posições.
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

int main() {
    int vetor[TAM];

    LeVetor(vetor, TAM);

    printf("\nSoma dos elementos do vetor: %d\n", SomaVetor(vetor, TAM));

    return 0;
}