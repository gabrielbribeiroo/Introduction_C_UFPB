/*
Fazer um programa que leia uma sequência de pares de números inteiros quaisquer, sendo dois inteiros por linha de entrada.
A entrada de dados termina quando os dois números lidos forem nulos. 
Este par de zeros não deve ser processado e serve apenas para marcar o término da entrada de dados. 
Para cada par A, B de números lidos:
    - Se B > A, mostrar a sequência: A; A + 1; . . .; B - 1; B;
    - Caso contrário, mostrar a sequência B; B + 1; . . .; A - 1; A.
Por exemplo:
Entrada -- Saída
4 6         4 5 6
2 -3        -3 -2 -1 0 1 2
0 0
*/

#include <stdio.h>

int main() {
    int a, b, i;

    printf("Digite dois numeros inteiros [0 0 p/ FINALIZAR]: \n");
    scanf("%d %d", &a, &b);
    
    while ((a!= 0) && (b != 0)) {
        if (b > a) {
            for (i = a; i <= b; i++) {
                printf("%d ", i);
            }
        } 
        else {
            for (i = b; i <= a; i++) {
                printf("%d ", i);
            }
        }

        printf("\n");

        printf("Digite dois numeros inteiros: \n");
        scanf("%d %d", &a, &b);
    }
    printf("Fim do programa. \n");
    return 0;
}