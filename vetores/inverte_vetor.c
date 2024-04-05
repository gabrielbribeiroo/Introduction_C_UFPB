/*
Ler um vetor A com 20 elementos. 
Gerar e mostrar o vetor B, obtido pela inversão da ordem do vetor A.
*/

#include <stdio.h>

#define TAM 20

void LeVetor(int a[], int t) {
    printf("Digite os elementos do vetor:\n");

    for (int i=0; i<t; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void InverteVetores(int a[], int b[], int t) {
    int j = t - 1;
    for (int i=0; i<t; i++) {
        b[j] = a[i];
        j--;
    }
}

void MostraVetor(int v[], int t) {
    printf("\nVetor invertido:\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = %d\n", i, v[i]);
    }
}

int main() {
    int vetorA[TAM], vetorB[TAM];

    LeVetor(vetorA, TAM);
    InverteVetores(vetorA, vetorB, TAM);
    MostraVetor(vetorB, TAM);

    return 0;
}