/*
Leia uma frase inclusive com os espaços em branco. 
Retirar os espaços em branco e depois escrever a string resultante.
*/

#include <stdio.h>
#include <string.h>

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin); // Leitura da string
}

void RemoverEspacos(char *frase) {
    int i = 0, j = 0;
    
    while (frase[i] != '\0') { // Enquanto a string não for encerrada
        // Verifica se o caractere é um espaço ou não
        if (frase[i] != ' ') {
            frase[j] = frase[i]; // Copia os caracteres diferentes de espaço
            j++;
        }
        i++;
    }
    frase[j] = '\0'; // Encerra a string 
}

void MostrarFrase(char *frase) {
    printf("Frase sem espacos em branco: %s\n", frase); // Mostra a frase sem espaços
}

int main() {
    char frase[TAM];

    // Chamada das funções
    LerFrase(frase);
    RemoverEspacos(frase);
    MostrarFrase(frase);

    return 0;
}