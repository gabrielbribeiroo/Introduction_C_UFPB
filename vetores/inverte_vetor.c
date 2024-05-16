/*
Ler um vetor A com 20 elementos. 
Gerar e mostrar o vetor B, obtido pela inversão da ordem do vetor A.
*/

#include <stdio.h>

#define TAM 20 // Define uma constante TAM de valor 20 que representa o tamanho do vetor

void LeVetor(int a[], int t) {
    printf("Digite os elementos do vetor:\n");

    // Leitura dos elementos de cada posição do vetor
    for (int i=0; i<t; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void InverteVetores(int a[], int b[], int t) {
    int j = t - 1;
    for (int i=0; i<t; i++) {
        b[j] = a[i]; // Inverte a ordem dos elementos do vetor
        j--;
    }
}

void MostraVetor(int v[], int t) {
    printf("\nVetor invertido:\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = %d\n", i, v[i]); // Mostra os elementos do vetor invertido
    }
}

int main() {
    int vetorA[TAM], vetorB[TAM];

    // Chamada das funções
    LeVetor(vetorA, TAM);
    InverteVetores(vetorA, vetorB, TAM);
    MostraVetor(vetorB, TAM);

    return 0;
}