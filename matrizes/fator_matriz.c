/*
Faça um programa que preencha uma matriz M(3x3). 
Calcule e mostre a matriz R (resultante da multiplicação dos elementos de M pelo seu menor elemento).
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

int MenorElemento(int m[][3], int L, int C) {
    int i, j, menor = 51;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            if (m[i][j] < menor) {
                menor = m[i][j];
            }
        }
    }

    return menor;
}

void MultiplicaMatriz(int m[][3], int L, int men, int r[][3]) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<L; j++) {
            r[i][j] = m[i][j] * men;
        }
    }
}

void MostraMatrizMultiplicada(int r[][3], int L) {
    int i, j;

    printf("\nMATRIZ MULTIPLICADA:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<L; j++) {
            printf("%4d ", r[i][j]);
        }
        printf("\n");   
    }

    printf("\n");
}

int main() {
    int A[3][3], R[3][3], menor;

    srand(time(NULL));
    GeraMatriz(A, 3, 3);
    MostraMatriz(A, 3, 3);
    
    menor = MenorElemento(A, 3, 3);

    MultiplicaMatriz(A, 3, menor, R);

    printf("\nFator multiplicativo da matriz 3x3: %d\n", menor);

    MostraMatrizMultiplicada(R, 3);

    return 0;
}