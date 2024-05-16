/*
Calcular a média dos elementos de um vetor de 10 posições.
*/

#include <stdio.h>

#define TAM 10 // Define uma constante TAM de valor 10 que representa o tamanho do vetor

void LeVetor(int v[], int t) {
    printf("Digite os elementos do vetor...\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]); // Leitura dos elementos de cada posição do vetor
    }
}

int SomaVetor(int v[], int t) {
    int i, s = 0;

    for (i=0; i<t; i++) {
        s += v[i]; // Soma todos os elementos do vetor
    }

    return s; // Retorna a soma
}

float MediaVetor(int s, int t) {
    float m;

    m = (float) s / t; // Calcula a média dos elementos

    return m; // Retorna a média
}

int main() {
    int vetor[TAM], soma;
    float media;

    // Chamada das funções
    LeVetor(vetor, TAM);

    soma = SomaVetor(vetor, TAM);
    media = MediaVetor(soma, TAM);

    printf("\nSoma dos elementos do vetor: %d\n", soma);
    printf("Media dos elementos do vetor: %.2f\n", media);

    return 0;
}