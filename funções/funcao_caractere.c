/*
Faça uma função que desenhe linhas de caracteres na tela. 
A função receberá como argumentos o tipo de caractere e o número de linhas que deverá desenhar.
*/

#include <stdio.h>

void EscreveLinhas (char c, int L) {

    for (int linha = 1; linha <= L; linha++) {
        for (int j = 1; j <= 70; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    int qnt_linhas;
    char c;

    printf("Digite o caractere: \n");
    c = getchar();
    
    printf("Quantas linhas? \n");
    scanf("%d", &qnt_linhas);

    EscreveLinhas (c, qnt_linhas);

    return 0;
}