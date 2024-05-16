/*
Fazer uma função que procura por um número em um vetor e, retorna o seu endereço (índice) caso o encontre. 
Se não encontrar, mostrar uma mensagem de que não achou.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10 // Define uma constante TAM de valor 10 que representa o tamanho do vetor

void MostraVetor(int v[], int t) {
    printf("Vetor:\n");

    for (int i=0; i<t; i++) {
        printf("V[%d] = %d\n", i, v[i]); // Mostra todos os elementos do vetor
    }
}

void ProcurarValor(int v[], int t) {
    int valor, j = 0, total = 0;
    int *index = malloc(t * sizeof(int)); // Aloca a posição na memória dinâmica

    printf("Digite o valor que deseja encontrar:\n");
    scanf("%d", &valor); 

    for (int i=0; i<t; i++) {
        // Verifica se o elemento é igual ao valor digitado
        if (v[i] == valor) {
            index[j] = i; // Forma um vetor recebendo os índices dos elementos que são iguais ao valor
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

    free(index); // Libera a memória
}  

int main () {
    int vetor[TAM];

    srand((unsigned)time(NULL)); 

    for (int i = 0; i<TAM; i++) {
        vetor[i] = 1 + rand()%100; // Gera valores aleatórios para o vetor até 100
    }

    // Chamada das funções
    MostraVetor(vetor, TAM);
    ProcurarValor(vetor, TAM);

    return 0;
}
