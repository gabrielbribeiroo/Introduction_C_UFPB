/*
Leia uma cadeia de caracteres e converta todas as letras minúsculas para maiúsculas.
Dica: subtraia 32 dos caracteres, cujo código ASCII está entre 97 e 122.
*/

#include <stdio.h>
#include <string.h>

#define TAM 101

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin);
}

void MinusculasParaMaiusculas(char *frase) {
    while (*frase != '\0') {
        if ((*frase >= 'a') && (*frase <= 'z')) {
            *frase -= 32;
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
    MinusculasParaMaiusculas(frase);
    MostrarFrase(frase);

    return 0;
}