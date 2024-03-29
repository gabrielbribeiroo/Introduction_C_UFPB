/*
Fazer uma função que procura por um número em um vetor e, retorna o seu endereço (índice) caso o encontre. 
Se não encontrar, mostrar uma mensagem de que não achou.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void MostraVetor(int v[], int t) {
    printf("Vetor:\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = %d\n", i, v[i]);
    }
}

void ProcurarValor(int v[], int t) {
    int valor, j = 0, total = 0;
    int *index = malloc(t * sizeof(int));



    printf("Digite o valor que deseja encontrar:\n");
    scanf("%d", &valor);

    for (int i=0; i<t; i++) {
        if (v[i] == valor) {
            index[j] = i;
            j++;
            total++;
        }
    }

    if (total == 0) {
        printf("O vetor nao possui o valor %d.\n", valor);
    }

    else {
        if (total == 1) {
            printf("O valor %d esta no indice %d do vetor.\n", valor, index[0]);
        } 
        else {
            printf("Encontramos %d valores %d nos indices, mostrados abaixo, do vetor:\n", total, valor);
            for (int i=0; i<total; i++) {
                printf("%d ", index[i]);
            }
            printf("\n");
        }
    }

    free(index);
}  

int main () {
    int vetor[TAM];

    srand((unsigned)time(NULL));

    for (int i = 0; i<TAM; i++) {
        vetor[i] = 1 + rand()%100;
    }

    MostraVetor(vetor, TAM);
    ProcurarValor(vetor, TAM);

    return 0;
}
