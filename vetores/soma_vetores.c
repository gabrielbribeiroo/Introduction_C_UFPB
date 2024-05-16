/*
Dados dois vetores A e B com 10 elementos cada. 
Armazenar no vetor C, a soma do elemento em A com o elemento em B, em cada uma das posições.
*/

#include <stdio.h>

#define TAM 10 // Define uma constante TAM de valor 10 que representa os tamanhos dos vetores

void LeVetorA(int a[], int t) {
    printf("Digite os elementos do vetor...\n");

    for (int i=0; i<t; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]); // Leitura de todos os elementos do vetor A
    }
}

void LeVetorB(int b[], int t) {
    printf("\nDigite os elementos do vetor...\n");

    for (int i=0; i<t; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &b[i]); // Leitura de todos os elementos do vetor B
    }
}

void SomaVetores(int a[], int b[], int t) {
    int s;

    for (int i=0; i<t; i++) {
        s = a[i] + b[i]; // Soma os elementos dos vetores A e B, por posição
        printf("A[%d] + B[%d] = %d\n", i, i, s); // Mostra a soma
    }
}

int main() {
    int vetorA[TAM], vetorB[TAM];

    // Chamada das funções
    LeVetorA(vetorA, TAM);
    LeVetorB(vetorB, TAM);

    printf("\nSoma dos elementos entre os vetores A e B: \n");
    SomaVetores(vetorA, vetorB, TAM);

    return 0;
}