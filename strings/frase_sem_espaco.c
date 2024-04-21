/*
Leia uma frase inclusive com os espaços em branco. 
Retirar os espaços em branco e depois escrever a string resultante.
*/

#include <stdio.h>
#include <string.h>

#define TAM 101

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin);
}

void RemoverEspacos(char *frase) {
    int i = 0, j = 0;
    
    while (frase[i] != '\0') {
        if (frase[i] != ' ') {
            frase[j] = frase[i];
            j++;
        }
        i++;
    }
    frase[j] = '\0';
}

void MostrarFrase(char *frase) {
    printf("Frase sem espacos em branco: %s\n", frase);
}

int main() {
    char frase[TAM];

    LerFrase(frase);
    RemoverEspacos(frase);
    MostrarFrase(frase);

    return 0;
}