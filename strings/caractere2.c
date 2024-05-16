/*
Crie um programa que receba uma string e um caractere, e apague todas as ocorrências desses caractere na string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100 // Define uma constante TAM de valor 100 que representa o tamanho da string

void RemoverCaractere(char *str, char c) {
    int i, j = 0, t = strlen(str);

    for (i=0; i<t; i++) {
        // Verifica se os caracteres da string são diferentes do digitado
        if (str[i] != c) {
            str[j++] = str[i]; // Atualiza os elementos da string, removendo o caractere digitado
        }
    }

    str[j] = '\0';
}

int main() {
    char letra, frase[TAM];

    printf("Digite uma frase: [MAXIMO DE %d CARACTERES]\n", TAM);
    fgets(frase, sizeof(frase), stdin); // Leitura da string
    frase[strcspn(frase, "\n")] = '\0'; // Remove o \n, substituindo-o pelo \0, encerrando a string

    printf("Digite um caractere:\n");
    letra = getchar(); // Leitura do caractere para ser removido

    RemoverCaractere(frase, letra); // Chamada da função
    printf("String apos remover o caractere %c: %s\n", letra, frase);
    
    return 0;
}