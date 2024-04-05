/*
Faça uma função que recebe, por parâmetro, 2 vetores A e B de tamanho 10 de inteiros. 
Ao final da função, B deve conter o fatorial de cada elemento de A. 
O vetor B retorna alterado.
A = 4 1 0 3 ...
B = 24 1 1 6 ...
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void LeVetorA(int a[], int t) {
    printf("Digite os elementos do vetor:\n");

    for (int i=0; i<t; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int Fatorial(int n) {
    int fatorial = 1;

    if ((n == 0) || (n == 1)) {
        return 1;
    }
    else {
        for (int i=1; i<=n; i++) {
            fatorial *= i;
        }
        return fatorial;
    }
}

void FormaVetorB(int a[], int b[], int t) {
    for (int i=0; i<t; i++) {
        b[i] = Fatorial(a[i]);
    }
}

void MostraVetor(int b[], int t) {
    printf("\n\nVetor:\n");
   
    for (int i=0; i<t; i++) {
        printf("B[%d] = %d\n", i, b[i]);
    }
}

int main() {
    int vetorA[TAM], vetorB[TAM];

    LeVetorA(vetorA, TAM);
    FormaVetorB(vetorA, vetorB, TAM);
    MostraVetor(vetorB, TAM);

    return 0;
}