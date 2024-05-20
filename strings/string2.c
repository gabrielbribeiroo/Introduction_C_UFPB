/*
Escreva um programa que recebe uma string e transforma alguns dos caracteres em maiúsculos e outros em minúsculos. 
Faça sorteios com a função rand() para gerar números aleatórios em C, que serão usados para escolher os índices dos caracteres que serão alterados. 
Use a função toupper() para converter o caracter para maiúsculo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define TAM 100 // Define uma constante TAM de valor 100 que representa o tamanho da string

void TransformarString(char *str) {
    int i, t = strlen(str), x;

    srand(time(NULL));

    for (i=0; i<t; i++) {
        x = rand() % TAM; // Sorteia posições até 100
        str[x] = toupper(str[x]); // Tranforma os caracteres naquela posição em letra maiúscula
    }
}

int main() {
    char frase[TAM];

    printf("Digite uma frase: [MAXIMO DE %d CARACTERES]\n", TAM);
    fgets(frase, sizeof(frase), stdin); // Leitura da string
    frase[strcspn(frase, "\n")] = '\0'; // Substitui o \n da string pelo \0 (encerramento)

    // Chamada das funções
    TransformarString(frase);
    printf("String transformada: %s\n", frase);

    return 0;
}