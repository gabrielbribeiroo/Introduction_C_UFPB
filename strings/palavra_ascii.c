/*
Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 ao valor ASCII de cada caractere da palavra. 
Imprima a string resultante.
*/

#include <stdio.h>
#include <string.h>

#define TAM 51

void LerPalavra(char *palavra) {
    printf("Digite uma palavra [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(palavra, sizeof(palavra), stdin);
}

void SomarASCII(char *palavra) {
    int i;
    
    for (i=0; i < (int)strlen(palavra); i++) {
        palavra[i] += 1;
    }
}

void MostrarPalavra(char *palavra) {
    printf("Palavra resultante: %s\n", palavra);
}

int main() {
    char palavra[TAM];

    LerPalavra(palavra);
    SomarASCII(palavra);
    MostrarPalavra(palavra);

    return 0;
}