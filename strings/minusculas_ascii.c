/*
Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. 
Dica: some 32 aos caracteres, cujo código ASCII está entre 65 e 90.
*/

#include <stdio.h>
#include <string.h>

#define TAM 101

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin);
}

void MaiusculasParaMinusculas(char *frase) {
    while (*frase != '\0') {
        if ((*frase >= 'A') && (*frase <= 'Z')) {
            *frase += 32;
        }
        frase++;
    }
}

void MostrarFrase(char *frase) {
    printf("Frase convertida para minusculas: %s\n", frase);
}

int main() {
    char frase[TAM];

    LerFrase(frase);
    MaiusculasParaMinusculas(frase);
    MostrarFrase(frase);

    return 0;
}