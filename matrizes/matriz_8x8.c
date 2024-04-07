/*
Faça um programa que preencha uma matriz M(8x8) com números inteiros e some cada uma das linhas, armazenando o resultado das somas em um vetor. 
A seguir, o programa deverá multiplicar cada elemento da matriz pela soma da linha correspondente.
Mostrar a matriz resultante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeraMatriz(int m[][8], int L, int C) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            m[i][j] = rand() % 10;
        }
    }
}

void MostraMatriz(int m[][8], int L, int C) {
    int i, j;

    printf("MATRIZ:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

void SomaLinha(int m[][8], int L, int C, int s[]) {
    int i, j, soma = 0;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            soma += m[i][j];
            s[i] = soma;
        }
    }
}

void MostraFatores(int s[], int t) {
    int i;

    printf("\nVetor Soma:");

    for (i=0; i<t; i++) {
        printf("\nLinha %d: %4d ", i+1, s[i]);
    }

    printf("\n");
}

void MultiplicaMatriz(int m[][8], int L, int C, int s[], int r[][8]) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            r[i][j] = m[i][j] * s[i];
        }
    }
}

void MostraMatrizResultante(int r[][8], int L, int C) {
    int i, j;
    
    printf("\nMultiplicando os elementos da matriz pela soma da linha correspondente...\n");
    printf("\nMATRIZ RESULTANTE:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%7d ", r[i][j]);
        }
        printf("\n");   
    }

    printf("\n");
}

int main() {
    int A[8][8], S[8], R[8][8];

    srand(time(NULL));
    GeraMatriz(A, 8, 8);
    MostraMatriz(A, 8, 8);
    SomaLinha(A, 8, 8, S);
    MostraFatores(S, 8);
    MultiplicaMatriz(A, 8, 8, S, R);
    MostraMatrizResultante(R, 8, 8);

    return 0;
}