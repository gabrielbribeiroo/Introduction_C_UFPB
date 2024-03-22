/*
Ler dois vetores A e B de 10 elementos cada. 
Intercalar os elementos de A com os elementos de B, de maneira a formar um terceiro vetor, C. 
Escrever o vetor C.
*/

#include <stdio.h>

#define TAM1 10
#define TAM2 20

void LeVetorA(int a[], int t) {
    printf("Digite os elementos do vetor A:\n");

    for (int i=0; i<t; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void LeVetorB(int b[], int t) {
    printf("\nDigite os elementos do vetor B:\n");

    for (int i=0; i<t; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &b[i]);
    }
}

void IntercalaVetores(int a[], int b[], int c[], int t) {
    int index_a = 0, index_b = 0;

    for (int i=0; i<t; i++) {
        if (i % 2 == 0) {
            c[i] = a[index_a];
            index_a++;
        }
        else {
            c[i] = b[index_b];
            index_b++;
        }
    }
}

void MostraVetorC(int c[], int t) {
    printf("\nVetor intercalado:\n");

    for (int i=0; i<t; i++) {
        printf("C[%d] = %d\n", i, c[i]);
    }
}

int main() {
    int vetorA[TAM1], vetorB[TAM1], vetorC[TAM2];

    LeVetorA(vetorA, TAM1);
    LeVetorB(vetorB, TAM1);
    IntercalaVetores(vetorA, vetorB, vetorC, TAM2);
    MostraVetorC(vetorC, TAM2);

    return 0;
}