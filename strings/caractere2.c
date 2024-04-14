/*
Crie um programa que receba uma string e um caractere, e apague todas as ocorrências desses caractere na string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

void RemoverCaractere(char *str, char c) {
    int i, j = 0, t = strlen(str);

    for (i=0; i<t; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main() {
    char letra, frase[TAM];

    printf("Digite uma frase: [MAXIMO DE %d CARACTERES]\n", TAM);
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; 

    printf("Digite um caractere:\n");
    letra = getchar();

    RemoverCaractere(frase, letra);

    printf("String apos remover o caractere %c: %s\n", letra, frase);
    
    return 0;
}