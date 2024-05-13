/*
Escreva um programa que preencha uma matriz M(10x10) com números inteiros.
Execute as trocas especificadas a seguir: 
    - a linha 2 com a linha 8; 
    - a coluna 4 com a coluna 10.
Mostre a matriz resultante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeraMatriz(int m[][10], int L, int C) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            m[i][j] = rand() % 100; // Gera elementos aleatórios até 100
        }
    }
}

void MostraMatriz(int m[][10], int L, int C) {
    int i, j;

    printf("MATRIZ:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", m[i][j]); // Mostra os elementos da matriz com 4 espaços
        }
        printf("\n");
    }
}

void TrocaMatriz(int m[][10], int L, int C, int r[][10]) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            // Troca os elementos da matriz
            if (i == 1) {
                r[7][j] = m[i][j];
            }
            else {
                if (i == 7) {
                    r[1][j] = m[i][j];
                }
                else {
                    r[i][j] = m[i][j];
                }
            }
        }
    }

    for(i=0; i<L; i++) {
        r[i][3] = m[i][9];
        r[i][9] = m[i][3];
    }
}

void MostraMatrizResultante(int r[][10], int L, int C) {
    int i, j;
    
    printf("\nTrocando os elementos da linha 2 com a linha 8, e da coluna 4 com a coluna 10...\n");
    printf("\nMATRIZ RESULTANTE:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", r[i][j]); // Mostra os elementos da matriz resultante com 7 espaços
        }
        printf("\n");   
    }

    printf("\n");
}

int main() {
    int A[10][10], R[10][10];
    
    // Chamada de funções
    srand(time(NULL));
    GeraMatriz(A, 10, 10);
    MostraMatriz(A, 10, 10);
    TrocaMatriz(A, 10, 10, R);
    MostraMatrizResultante(R, 10, 10);

    return 0;
}