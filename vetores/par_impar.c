/*
Preencher um vetor X de 10 elementos com:
    - número 1, se o índice do elemento for ímpar;
    - número 0, se o índice for par.
Mostrar o vetor X.
*/

#include <stdio.h>

#define TAM 10 // Define uma constante TAM de valor 10 que representa o tamanho do vetor

void LeVetor(int x[], int t) {
    printf("Digite os elementos do vetor...\n");

    for (int i=0; i<t; i++) {
        printf("X[%d] = ", i);
        scanf("%d", &x[i]); // Leitura dos elementos de cada posição do vetor
    }
}

void AlteraVetor(int x[], int t) {
    for (int i=1; i<t; i++) {
        // Verifica se as posições dos elementos são pares ou não
        if (i % 2 == 0) {
            x[i] = 0; // Substitui o valor por 0 do elemento, nos índices pares
        }
        else {
            x[i] = 1; // Substitui o valor por 1 do elemento, nos índices ímpares
        }
    }
}


void MostraVetor(int x[], int t) {
    printf("\n\nVetor: ");

    for (int i=0; i<t; i++) {
        printf("%d ", x[i]); // Mostra os elementos do vetor modificado
    }

    printf("\n");
}

int main() {
    int vetor[TAM];

    // Chamada das funções
    LeVetor(vetor, TAM);
    AlteraVetor(vetor, TAM);    
    MostraVetor(vetor, TAM);

    return 0;
}