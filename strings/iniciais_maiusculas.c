/*
Escreva um programa que receba uma frase com caracteres em minúsculo e transforme o primeiro caractere de cada palavra da frase em maiúsculo.
*/

#include <stdio.h>
#include <ctype.h>

void CapitalizarPalavras(char *str) {
    int i;
    char antes = ' ';

    for (i=0; str[i]!='\0'; i++) {
        // Verifica se o caractere anterior é um espaço e o atual é uma letra minúscula
        if ((antes==' ') && (islower(str[i]))) {
            str[i] = toupper(str[i]); // Transforma o caractere atual para maiúsculo
        }
        antes = str[i]; // Atualiza o caractere anterior
    }
}

int main() {
    char frase[101];

    printf("Digite uma frase: [MAXIMO DE 100 CARACTERES]\n");
    fgets(frase, 101, stdin); // Leitura da string

    CapitalizarPalavras(frase); // Chamada da função
    printf("Frase com iniciais maiusculas: %s\n", frase); // Mostra a frase modificada

    return 0;
}