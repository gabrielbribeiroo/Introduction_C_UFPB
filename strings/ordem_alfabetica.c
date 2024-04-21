/*
Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem alfabética. 
Dica: ‘a’ é menor do que ‘b’.
*/

#include <stdio.h>
#include <string.h>

#define TAM 31

void LerPalavras(char *palavra1, char *palavra2) {
    printf("Digite uma palavra [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(palavra1, TAM, stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';
    
    printf("Digite outra palavra [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(palavra2, TAM, stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';
    
}

int CompararPalavras(const char *palavra1, const char *palavra2) {
    return strcmp(palavra1, palavra2);
}

void MostrarOrdemAlfabetica(const char *palavra1, const char *palavra2) {
    int comparacao = CompararPalavras(palavra1, palavra2);

    if (comparacao < 0) {
        printf("\n%s vem antes de %s na ordem alfabetica.\n", palavra1, palavra2);
    }
    else {
        if (comparacao > 0) {
            printf("\n%s vem antes de %s na ordem alfabetica.\n", palavra2, palavra1);
        }
        else {
            printf("\nAs palavras sao iguais.\n");
        }
    }
}

int main() {
    char palavra1[TAM], palavra2[TAM];

    LerPalavras(palavra1, palavra2);
    CompararPalavras(palavra1, palavra2);
    MostrarOrdemAlfabetica(palavra1, palavra2);

    return 0;
}