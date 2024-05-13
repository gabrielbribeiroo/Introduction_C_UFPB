/*
Escreva um programa que preencha uma matriz M(6x4) com números inteiros.
Calcule e mostre quantos elementos dessa matriz são maiores que 30.
Em seguida, monte uma segunda matriz com os elementos diferentes de 30. 
No lugar do número 30, da segunda matriz, coloque o número zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENTO 30 // Define uma constante para um determinado elemento

void GeraMatriz(int m[][4], int L, int C) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            m[i][j] = rand() % 100; // Gera elementos aleatórios até 100
        }
    }
}

void MostraMatriz(int m[][4], int L, int C) {
    int i, j;

    printf("MATRIZ:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", m[i][j]); // Mostra os elementos da matriz com 4 espaços
        }
        printf("\n");
    }
}

int QuantidadeMaioresElemento(int m[][4], int L, int C) {
    int i, j, qnt_maior = 0;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            if (m[i][j] > ELEMENTO) {
                qnt_maior++; // Conta a quantidade de elementos maiores que o valor da constante
            }
        }
    }

    return qnt_maior;
}

void MatrizDiferenteElemento(int m[][4], int L, int C, int b[][4]) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            
            if (m[i][j] == 30) {
                b[i][j] = 0; // Altera a matriz
            }
            else {
                b[i][j] = m[i][j];
            }
        }
    }
}

void MostraMatrizDiferente(int b[][4], int L, int C) {
    int i, j;

    printf("\nTrocando o elemento 30 por 0...\n");
    printf("\nMATRIZ ALTERADA:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", b[i][j]); // Mostra os elementos da matriz diferente com 4 espaços
        }
        printf("\n");   
    }

    printf("\n");
}

int main() {
    int A[6][4], B[6][4], qnt_maiores;

    // Chamada de funções
    srand(time(NULL));
    GeraMatriz(A, 6, 4);
    MostraMatriz(A, 6, 4);
    
    qnt_maiores = QuantidadeMaioresElemento(A, 6, 4);
    printf("\nA matriz 6x4 acima possui %d elementos maiores que 30.\n", qnt_maiores);

    MatrizDiferenteElemento(A, 6, 4, B); 
    MostraMatrizDiferente(B, 6, 4);

    return 0;
}