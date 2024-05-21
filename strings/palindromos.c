/*
Existem palíndromos que são formados por frases, tais como:
    • Socorram-me subi no onibus em Marrocos.
    • Omitiram radar maritmo.
Escreva um programa que ignore os espaços e o caractere ‘-’, ao verificar se uma frase é um palíndromo.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h.>

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin); // Leitura da string
    frase[strcspn(frase, "\n")] = '\0'; // Substitui o \n da string pelo \0 (encerramento)
}

void RemoverEspacos(char *frase) {
    int i = 0, j = 0;
    
    while (frase[i] != '\0') {
        // Verifica se o caractere é diferente de espaço
        if (frase[i] != ' ') {
            frase[j] = frase[i]; // Mantém apenas os caracteres diferentes de espaços
            j++;
        }
        i++;
    }
    frase[j] = '\0';
}

void RemoverPontuacoes(char *frase) {
    int i = 0, j = 0;
    
    while (frase[i] != '\0') {
        // Verifica se o caractere é alfanumérico ou hífen
        if (isalpha(frase[i]) || frase[i] == '-') {
            frase[j] = tolower(frase[i]); // Transforma os caracteres para letras minúsculas
            j++;
        }
        i++;
    }
    frase[j] = '\0';
}

int EhPalindromo(char *frase) {
    int i = 0, j = strlen(frase) - 1;

    while (i < j) {
        // Verifica os caracteres do início e do fim
        if (frase[i] != frase[j]) {
            return 0; // Não é palíndromo
        }
        i++;
        j--;
    }
    return 1; // É palíndromo
}

void MostrarPalindromo(char *frase) {
    int comparacao = EhPalindromo(frase); // Chamada da função
    
    // Verifica se é palíndromo
    if (comparacao) {
        printf("Eh palindromo.\n");
    }
    else {
        printf("Nao eh palindromo.\n");
    }
}

int main() {
    char frase[TAM];

    // Chamada das funções
    LerFrase(frase);
    RemoverEspacos(frase);
    RemoverPontuacoes(frase);
    EhPalindromo(frase);
    MostrarPalindromo(frase);

    return 0;
}
