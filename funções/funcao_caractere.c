/*
Faça uma função que desenhe linhas de caracteres na tela. 
A função receberá como argumentos o tipo de caractere e o número de linhas que deverá desenhar.
*/

#include <stdio.h>

void EscreveLinhas (char c, int L) {
    for (int linha = 1; linha <= L; linha++) {
        for (int j = 1; j <= 70; j++) {
            printf("%c", c); // Mostra o mesmo caractere em um determinado número de linhas
        }
        printf("\n");
    }
}

int main() {
    int qnt_linhas;
    char c;

    printf("Digite o caractere: \n");
    c = getchar(); // Lê o caractere que será repetido
    
    printf("Quantas linhas? \n");
    scanf("%d", &qnt_linhas); // Lê a quantidade de linhas de repetição

    EscreveLinhas(c, qnt_linhas); // Chamada de função

    return 0;
}