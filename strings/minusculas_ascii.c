/*
Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. 
Dica: some 32 aos caracteres, cujo código ASCII está entre 65 e 90.
*/

#include <stdio.h>
#include <string.h>

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin); // Leitura da string
}

void MaiusculasParaMinusculas(char *frase) {
    while (*frase != '\0') {
        // Verifica se o caractere é maiúsculo
        if ((*frase >= 'A') && (*frase <= 'Z')) {
            *frase += 32; // Avança para o valor da letra em minúsculo (tabela ASCII)
        }
        frase++;
    }
}

void MostrarFrase(char *frase) {
    printf("Frase convertida para minusculas: %s\n", frase); // Mostra a string
}

int main() {
    char frase[TAM];

    // Chamada das funções
    LerFrase(frase);
    MaiusculasParaMinusculas(frase);
    MostrarFrase(frase);

    return 0;
}