/*
Escreva uma função que concatena/junta dois vetores. 
Por exemplo, V1 = 0, 1, 2, 3, 4 e V2 = 4, 3, 2, 1, 0, o vetor resultante será R = 0, 1, 2, 3, 4, 4, 3, 2, 1, 0.
*/

#include <stdio.h>

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

void ConcatenaVetores(int a[], int b[], int r[], int t1, int t2) {
    int i, j;
    
    for (i=0; i<t1; i++) {
        r[i] = a[i];
    }

    i = 0;

    for (j=0; j<t2; j++) {
        r[t1 + i] = b[j];
        i++;
    }
}

void MostraVetorR(int r[], int t) {
    printf("\nVetor concatenado:\n");

    for (int i=0; i<t; i++) {
        printf("R[%d] = %d\n", i, r[i]);
    }
}

int main() {
    int tam1, tam2, tamr;
    
    printf("Digite o tamanho do vetor A:\n");
    scanf("%d", &tam1);
    printf("Digite o tamanho do vetor B:\n");
    scanf("%d", &tam2);
    
    tamr = tam1 + tam2;
    
    int vetorA[tam1], vetorB[tam2], vetorR[tamr];

    LeVetorA(vetorA, tam1);
    LeVetorB(vetorB, tam2);
    ConcatenaVetores(vetorA, vetorB, vetorR, tam1, tam2);
    MostraVetorR(vetorR, tamr);

    return 0;
}