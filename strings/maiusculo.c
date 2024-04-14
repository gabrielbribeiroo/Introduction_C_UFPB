/*
Escreva um programa que receba uma frase com caracteres em minúsculo e transforme o primeiro caractere de cada palavra da frase em maiúsculo.
*/

#include <stdio.h>
#include <ctype.h>

void CapitalizarPalavras(char *str) {
    int i;
    char antes = ' ';

    for (i=0; str[i]!='\0'; i++) {
        if ((antes==' ') && (islower(str[i]))) {
            str[i] = toupper(str[i]);
        }
        antes = str[i];
    }
}

int main() {
    char frase[101];

    printf("Digite uma frase: [MAXIMO DE 100 CARACTERES]\n");
    fgets(frase, 101, stdin);

    CapitalizarPalavras(frase);
    printf("Frase com iniciais maiusculas: %s\n", frase);

    return 0;
}