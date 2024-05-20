/*
Leia uma cadeia de caracteres e converta todas as letras minúsculas para maiúsculas.
Dica: subtraia 32 dos caracteres, cujo código ASCII está entre 97 e 122.
*/

#include <stdio.h>
#include <string.h>

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin); // Leitura da string
}

void MinusculasParaMaiusculas(char *frase) {
    while (*frase != '\0') {
        // Verifica se o caractere é minúsculo
        if ((*frase >= 'a') && (*frase <= 'z')) {
            *frase -= 32; // Retorna para o valor da letra em maiúsculo (tabela ASCII)
        }
        frase++;
    }
}

void MostrarFrase(char *frase) {
    printf("Frase convertida para minusculas: %s\n", frase); // Mostra a frase
}

int main() {
    char frase[TAM];

    // Chamada das funções
    LerFrase(frase);
    MinusculasParaMaiusculas(frase);
    MostrarFrase(frase);

    return 0;
}