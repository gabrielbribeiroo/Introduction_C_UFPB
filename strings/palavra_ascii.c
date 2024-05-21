/*
Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 ao valor ASCII de cada caractere da palavra. 
Imprima a string resultante.
*/

#include <stdio.h>
#include <string.h>

#define TAM 51 // Define uma constante TAM de valor 51 que representa o tamanho da string

void LerPalavra(char *palavra) {
    printf("Digite uma palavra [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(palavra, TAM, stdin); // Leitura da string
    palavra[strlen(palavra) - 1] = '\0'; // Encerra a string
}

void SomarASCII(char *palavra) {
    int i;
    
    for (i=0; i < (int)strlen(palavra); i++) {
        palavra[i] += 1; // Incrementa 1 unidade do caractere na tabela ASCII
    }
}

void MostrarPalavra(char *palavra) {
    printf("Palavra resultante: %s\n", palavra); // Mostra a palavra resultante
}

int main() {
    char palavra[TAM];

    // Chamada das funções
    LerPalavra(palavra);
    SomarASCII(palavra);
    MostrarPalavra(palavra);

    return 0;
}