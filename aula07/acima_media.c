/*
Calcular quantos elementos do vetor estão acima da média.
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
    int s = 0;

    for (int i=0; i<t; i++) {
        s += v[i];
    }

    return s;
}

float MediaVetor(int s, int t) {
    float m;

    m = (float) s / t;

    return m;
}

int AcimaMedia(int v[], int t, int m) {
    int qnt_acima = 0;

    for (int i=0; i<t; i++) {
        if (v[i] > m) {
            qnt_acima++;
        }
    }

    return qnt_acima;
}

int main() {
    int vetor[TAM], soma, acima_media;
    float media;

    LeVetor(vetor, TAM);

    soma = SomaVetor(vetor, TAM);
    media = MediaVetor(soma, TAM);
    acima_media = AcimaMedia(vetor, TAM, media);

    printf("\nSoma dos elementos do vetor: %d\n", soma);
    printf("Media dos elementos do vetor: %.2f\n", media);
    printf("Quantidade dos elementos acima da media do vetor = %d\n", acima_media);

    return 0;
}