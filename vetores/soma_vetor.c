/*
Calcular a soma dos elementos de um vetor de 10 posições.
*/

#include <stdio.h>

#define TAM 10 // Define uma constante TAM de valor 10 que representa o tamanho do vetor

void LeVetor(int v[], int t) {
    printf("Digite os elementos do vetor...\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]); // Leitura de todos os elementos do vetor
    }
}

int SomaVetor(int v[], int t) {
    int i, s = 0;

    for (i=0; i<t; i++) {
        s += v[i]; // Soma todos os elementos do vetor
    }

    return s; // Retorna a soma
}

int main() {
    int vetor[TAM];

    // Chamada das funções
    LeVetor(vetor, TAM);
    printf("\nSoma dos elementos do vetor: %d\n", SomaVetor(vetor, TAM));

    return 0;
}