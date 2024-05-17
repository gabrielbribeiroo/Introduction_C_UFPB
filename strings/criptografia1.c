/*
Faça um programa para criptografar uma frase dada pelo usuário.
A criptografia deverá inverter a frase.
Frase: EU ESTOU NA ESCOLA
Saída: ALOCSE AN UOTSE UE
*/

#include <stdio.h>
#include <string.h>

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string

void InverteFrase(char *str) {
    int i, j;
    char criptografia;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        criptografia = str[i]; 
        str[i] = str[j]; // Inverte a ordem dos caracteres
        str[j] = criptografia; // Inverte a string
    }
}

int main() {
    char frase[TAM];

    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM - 1);
    fgets(frase, sizeof(frase), stdin); // Leitura da string

    InverteFrase(frase); // Chamada da função
    printf("\nFrase criptografada: %s\n", frase); // Mostra a frase criptografada

    return 0;
}