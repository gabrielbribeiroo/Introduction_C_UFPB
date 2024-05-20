/*
Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem alfabética. 
Dica: ‘a’ é menor do que ‘b’.
*/

#include <stdio.h>
#include <string.h>

#define TAM 31 // Define uma constante TAM de valor 31 que representa os tamanhos das strings

void LerPalavras(char *palavra1, char *palavra2) {
    printf("Digite uma palavra [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(palavra1, TAM, stdin); // Leitura da string 1
    palavra1[strcspn(palavra1, "\n")] = '\0'; // Substitui o \n da string pelo \0 (encerramento)
    
    printf("Digite outra palavra [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(palavra2, TAM, stdin); // Leitura da string 2
    palavra2[strcspn(palavra2, "\n")] = '\0'; // Substitui o \n da string pelo \0 (encerramento)
    
}

int CompararPalavras(const char *palavra1, const char *palavra2) {
    return strcmp(palavra1, palavra2); // Compara as strings
}

void MostrarOrdemAlfabetica(const char *palavra1, const char *palavra2) {
    int comparacao = CompararPalavras(palavra1, palavra2); // Chamada da função

    if (comparacao < 0) {
        printf("\n%s vem antes de %s na ordem alfabetica.\n", palavra1, palavra2); // String 1 é menor que a string 2
    }
    else {
        if (comparacao > 0) {
            printf("\n%s vem antes de %s na ordem alfabetica.\n", palavra2, palavra1); // String 2 é menor que a string 1
        }
        else {
            printf("\nAs palavras sao iguais.\n"); // Mesma string 
        }
    }
}

int main() {
    char palavra1[TAM], palavra2[TAM];

    // Chamada das funções
    LerPalavras(palavra1, palavra2);
    CompararPalavras(palavra1, palavra2);
    MostrarOrdemAlfabetica(palavra1, palavra2);

    return 0;
}