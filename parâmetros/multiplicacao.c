/*
Faça uma função que receba como parâmetro um inteiro no intervalo de 1 a 9, e mostre a seguinte tabela de multiplicação:
(no exemplo, n=9)
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
6 12 18 24 30 36
7 14 21 28 35 42 49
8 16 24 32 40 48 56 64
9 18 27 36 45 54 63 72 81 
*/

#include <stdio.h>

void TabelaMultiplicacao(int *n) {
    if ((*n < 1) || (*n > 9)) {
        printf("Numero fora do intervalo. Tente novamente!\n");
    }
    for (int i=1; i<=*n; i++) {
        for (int j=1; j<=i; j++) {
            int produto =  i * j;
            printf("%d\t", produto);    
        }
        printf("\n");
    }
}

int main() {
    int num;
    printf("Digite o numero de linhas da tabela:\n");
    scanf("%d", &num);

    TabelaMultiplicacao(&num);

    return 0;
}