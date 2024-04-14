/*
Escreva um programa que receba uma string (palavra) e determine se ela é palíndromo. 
Um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Ex.: arara, ovo, anilina, salas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int EhPalindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char palavra[21];

    printf("Digite uma palavra: [MAXIMO DE 20 CARACTERES]\n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    if (EhPalindromo(palavra)) {
        printf("A palavra %s eh um palindromo.\n", palavra);
    }
    else {
        printf("A palavra %s nao eh um palindromo.\n", palavra);
    }

    return 0;
}