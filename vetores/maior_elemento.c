/*
Obter um vetor V de 20 posições. 
Mostrar o maior elemento do vetor V e a sua posição.
*/

#include <stdio.h>

#define TAM 20 // Define uma constante TAM de valor 20 que representa o tamanho do vetor

void LeVetor(int v[], int t) {
    printf("Digite os elementos do vetor:\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]); // Leitura dos elementos de cada posição do vetor
    }
}

void MaiorElemento(int v[], int t, int *maior, int *idx_maior) {
    *maior = -2147483647;
    *idx_maior = 0;

    for (int i=0; i<t; i++) {
        // Verifica o maior elemento do vetor
        if (v[i] > *maior) {
            *maior = v[i]; // Atualiza o maior elemento
            *idx_maior = i; // Posição do maior elemento
        }
    }
}

int main() {
    int vetor[TAM], maior_elemento, posicao;

    // Chamada das funções
    LeVetor(vetor, TAM);
    MaiorElemento(vetor, TAM, &maior_elemento, &posicao);

    printf("Maior elemento do vetor digitado: %d\n", maior_elemento);
    printf("Posicao do maior elemento: %d\n", posicao);

    return 0;
}
