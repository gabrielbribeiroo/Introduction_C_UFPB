/*
Multiplicar os elementos que estão nos índices ímpares do vetor pela constante 15.
*/

#include <stdio.h>

#define TAM 10 // Define uma constante TAM de valor 10 que representa o tamanho do vetor
#define FATOR 15 // Define uma constante FATOR de valor 15 que representa o valor que multiplicará os elementos do vetor

void LeVetor(int v[], int t) {
    printf("Digite os elementos do vetor...\n");

    // Leitura dos elementos de cada posição do vetor
    for (int i=0; i<t; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

void MultiplicaPor15(int v[], int t) {
    for (int i=1; i<t; i+=2) {
        v[i] = v[i] * FATOR; // Multiplica os elementos do vetor por um fator constante determinado
    }
}

void MostraVetor(int v[], int t) {
    printf("\n\nVetor: ");

    for (int i=0; i<t; i++) {
        printf("%d ", v[i]); // Mostra os elementos do vetor
    }

    printf("\n");
}

int main() {
    int vetor[TAM];

    // Chamada das funções
    LeVetor(vetor, TAM);
    MultiplicaPor15(vetor, TAM);
    MostraVetor(vetor, TAM);

    return 0;
}