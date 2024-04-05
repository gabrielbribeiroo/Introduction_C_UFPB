/*
Seja A uma matriz 4x5.
Determine o maior elemento de A e a sua posição.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeraMatriz(int m[][5], int L, int C) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            m[i][j] = rand() % 50;
        }
    }
}

void MostraMatriz(int m[][5], int L, int C) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

int MaiorElemento(int m[][5], int L, int C, int *X, int *Y) {
    int i, j, maior = -1;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            if (m[i][j] > maior) {
                maior = m[i][j];
                *X = i;
                *Y = j;
            }
        }
    }

    return maior;
}

int main() {
    int A[4][5], maior, linha_maior, coluna_maior;

    srand(time(NULL));
    GeraMatriz(A, 4, 5);
    MostraMatriz(A, 4, 5);

    maior = MaiorElemento(A, 4, 5, &linha_maior, &coluna_maior);

    printf("Maior elemento = %d\n"
            "Linha: %d\n"
            "Coluna: %d\n",
            maior, linha_maior+1, coluna_maior+1);

    return 0;
}