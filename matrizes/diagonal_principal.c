/*
Seja A uma matriz 3x3. Fazer um programa que:
a) Calcule e mostre a soma dos elementos da diagonal principal.
b) Armazene os elementos da diagonal principal de A em um vetor D;
Mostre o vetor D.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeraMatriz(int m[][3], int L, int C) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            m[i][j] = rand() % 50; // Gera elementos aleatórios menores que 50
        }
    }
}

void MostraMatriz(int m[][3], int L, int C) {
    int i, j;

    printf("MATRIZ:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", m[i][j]); // Mostra os elementos da matriz com 4 espaços 
        }
        printf("\n");
    }
}

int SomaDiagonalPrincipal(int m[][3], int L) {
    int i, soma = 0;

    for (i=0; i<L; i++) {
        soma += m[i][i]; // Soma os elementos da diagonal principal
    }

    return soma;
}

void CalculaDiagonal(int m[][3], int L, int D[]) {
    int i;

    for (i=0; i<L; i++) {
        D[i] = m[i][i];
    }
}

void MostraDiagonal(int D[], int t) {
    int i;

    printf("\nVetor Diagonal: ");

    for (i=0; i<t; i++) {
        printf("%4d ", D[i]); // Mostra os elementos da diagonal principal em vetor
    }

    printf("\n");
}

int main() {
    int A[3][3], D[3];

    // Chamada de funções
    srand(time(NULL));
    GeraMatriz(A, 3, 3);
    MostraMatriz(A, 3, 3);
    SomaDiagonalPrincipal(A, 3);

    printf("Soma dos elementos da diagonal principal = %d\n", SomaDiagonalPrincipal(A, 3)); // Mostra a soma

    CalculaDiagonal(A, 3, D);
    MostraDiagonal(D, 3);

    return 0;
}
