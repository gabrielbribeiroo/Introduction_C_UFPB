/*
Multiplicar os elementos que estão nos índices ímpares do vetor pela constante 15.
*/

#include <stdio.h>

#define TAM 10
#define FATOR 15

void LeVetor(int v[], int t) {
    printf("Digite os elementos do vetor...\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }
}

void MultiplicaPor15(int v[], int t) {
    for (int i=1; i<t; i+=2) {
        v[i] = v[i] * FATOR;
    }
}

void MostraVetor(int v[], int t) {
    printf("\n\nVetor: ");

    for (int i=0; i<t; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

int main() {
    int vetor[TAM];

    LeVetor(vetor, TAM);
    MultiplicaPor15(vetor, TAM);
    MostraVetor(vetor, TAM);

    return 0;
}