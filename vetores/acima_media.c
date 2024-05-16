/*
Calcular quantos elementos do vetor estão acima da média.
*/

#include <stdio.h>

#define TAM 10 // Define uma constante TAM de valor 10 que representa o tamanho do vetor

void LeVetor(int v[], int t) {
    printf("Digite os elementos do vetor...\n");

    // Leitura dos elementos de cada posição do vetor
    for (int i=0; i<t; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

int SomaVetor(int v[], int t) {
    int s = 0; // Inicializa a soma com 0

    for (int i=0; i<t; i++) {
        s += v[i]; // Soma todos os elementos do vetor
    }

    return s; // Retorna a soma
}

float MediaVetor(int s, int t) {
    float m;

    m = (float) s / t; // A média dos elementos é a soma dividido pelo tamanho do vetor

    return m; // Retorna a média
}

int AcimaMedia(int v[], int t, int m) {
    int qnt_acima = 0;

    for (int i=0; i<t; i++) {
        // Verifica quais elementos estão acima da média
        if (v[i] > m) {
            qnt_acima++; // Conta a quantidade de elementos acima da média do vetor
        }
    }

    return qnt_acima; // Retorna a quantidade acima da média
}

int main() {
    int vetor[TAM], soma, acima_media;
    float media;

    // Chamada de funções
    LeVetor(vetor, TAM);

    soma = SomaVetor(vetor, TAM);
    media = MediaVetor(soma, TAM);
    acima_media = AcimaMedia(vetor, TAM, media);

    printf("\nSoma dos elementos do vetor: %d\n", soma);
    printf("Media dos elementos do vetor: %.2f\n", media);
    printf("Quantidade dos elementos acima da media do vetor = %d\n", acima_media);

    return 0;
}