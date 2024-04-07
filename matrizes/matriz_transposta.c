/*
Seja A uma matriz 3x3.
Determine a matriz T transposta de A.
Mostre a matriz T.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeraMatriz(int m[][3], int L, int C) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            m[i][j] = rand() % 50;
        }
    }
}

void MostraMatriz(int m[][3], int L, int C) {
    int i, j;

    printf("MATRIZ:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

void MatrizTransposta(int m[][3], int L, int t[][3]) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<L; j++) {
            t[i][j] = m[j][i];
        }
    }
}

void MostraTransposta(int t[][3], int L) {
    int i, j;

    printf("\nMATRIZ TRANSPOSTA:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<L; j++) {
            printf("%4d ", t[i][j]);
        }
        printf("\n");   
    }

    printf("\n");
}

int main() {
    int A[3][3], T[3][3];

    srand(time(NULL));
    GeraMatriz(A, 3, 3);
    MostraMatriz(A, 3, 3);
    MatrizTransposta(A, 3, T);
    MostraTransposta(T, 3);

    return 0;
}
