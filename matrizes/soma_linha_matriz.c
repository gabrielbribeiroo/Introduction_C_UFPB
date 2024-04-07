/*
Dada uma matriz A, determine a linha de A que possui a maior soma de seus elementos.
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

void MaiorSomaLinha(int m[][3], int L, int C) {
    int i, j, maior_soma = 0, linha_maior_soma;

    for (i=0; i<L; i++) {
        int soma_linha = 0;

        for (j=0; j<C; j++) {
            soma_linha += m[i][j];
        }

        if (soma_linha > maior_soma) {
            maior_soma = soma_linha;
            linha_maior_soma = i;
        }
    }

    printf("Linha com maior soma de elementos: %d\nSoma dos elementos da linha %d = %d\n", linha_maior_soma+1, linha_maior_soma+1, maior_soma);
}

int main() {
    int A[3][3];

    srand(time(NULL));
    GeraMatriz(A, 3, 3);
    MostraMatriz(A, 3, 3);
    MaiorSomaLinha(A, 3, 3);

    return 0;
}