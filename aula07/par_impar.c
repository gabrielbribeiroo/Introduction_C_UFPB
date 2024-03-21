/*
Preencher um vetor X de 10 elementos com:
    - número 1, se o índice do elemento for ímpar;
    - número 0, se o índice for par.
Mostrar o vetor X.
*/

#include <stdio.h>

#define TAM 10

void LeVetor(int x[], int t) {
    printf("Digite os elementos do vetor...\n");

    for (int i=0; i<t; i++) {
        printf("X[%d] = ", i);
        scanf("%d", &x[i]);
    }
}

void AlteraVetor(int x[], int t) {
    for (int i=1; i<t; i++) {
        if (i % 2 == 0) {
            x[i] = 0;
        }
        else {
            x[i] = 1;
        }
    }
}


void MostraVetor(int x[], int t) {
    printf("\n\nVetor: ");

    for (int i=0; i<t; i++) {
        printf("%d ", x[i]);
    }

    printf("\n");
}

int main() {
    int vetor[TAM];

    LeVetor(vetor, TAM);
    AlteraVetor(vetor, TAM);    
    MostraVetor(vetor, TAM);

    return 0;
}