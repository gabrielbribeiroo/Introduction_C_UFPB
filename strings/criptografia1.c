/*
Faça um programa para criptografar uma frase dada pelo usuário.
A criptografia deverá inverter a frase.
Frase: EU ESTOU NA ESCOLA
Saída: ALOCSE AN UOTSE UE
*/

#include <stdio.h>
#include <string.h>

#define TAM 101

void InverteFrase(char *str) {
    int i, j;
    char criptografia;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        criptografia = str[i];
        str[i] = str[j];
        str[j] = criptografia;
    }
}

int main() {
    char frase[TAM];

    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM - 1);
    fgets(frase, sizeof(frase), stdin);

    InverteFrase(frase);
    printf("\nFrase criptografada: %s\n", frase);

    return 0;
}