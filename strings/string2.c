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

#define TAM 100

void TransformarString(char *str) {
    int i, t = strlen(str), x;

    srand(time(NULL));

    for (i=0; i<t; i++) {
        x = rand() % TAM;
        str[x] = toupper(str[x]);
    }
}

int main() {
    char frase[TAM];

    printf("Digite uma frase: [MAXIMO DE %d CARACTERES]\n", TAM);
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; 

    TransformarString(frase);

    printf("String transformada: %s\n", frase);

    return 0;
}