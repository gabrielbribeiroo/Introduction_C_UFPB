/*
Existem palíndromos que são formados por frases, tais como:
    • Socorram-me subi no onibus em Marrocos.
    • Omitiram radar maritmo.
Escreva um programa que ignore os espaços e o caractere ‘-’, ao verificar se uma frase é um palíndromo.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h.>

#define TAM 101

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin);
    frase[strcspn(frase, "\n")] = '\0';
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

void RemoverPontuacoes(char *frase) {
    int i = 0, j = 0;
    
    while (frase[i] != '\0') {
        if (isalpha(frase[i]) || frase[i] == '-') {
            frase[j] = tolower(frase[i]);
            j++;
        }
        i++;
    }
    frase[j] = '\0';
}

int EhPalindromo(char *frase) {
    int i = 0, j = strlen(frase) - 1;

    while (i < j) {
        if (frase[i] != frase[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

void MostrarPalindromo(char *frase) {
    int comparacao = EhPalindromo(frase);
    
    if (comparacao) {
        printf("Eh palindromo.\n");
    }
    else {
        printf("Nao eh palindromo.\n");
    }
}

int main() {
    char frase[TAM];

    LerFrase(frase);
    RemoverEspacos(frase);
    RemoverPontuacoes(frase);
    EhPalindromo(frase);
    MostrarPalindromo(frase);

    return 0;
}
