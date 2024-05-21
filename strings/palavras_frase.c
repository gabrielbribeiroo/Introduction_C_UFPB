/* 
Faça um programa que receba uma frase e mostre cada palavra dela em uma linha separada.
Frase: computadores são máquinas potentes
computadores
são
máquinas
potentes
*/

#include <stdio.h>
#include <string.h>

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string

void MostraPalavras(const char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
      printf("%c", str[i]); // Mostra os caracteres das palavras

      // Verifica se o caractere é um espaço
      if (str[i] == ' ') {
        printf("\n"); // Pula a linha
      }
    }
}

int main() {
    char frase[TAM];

    printf("Digite a frase [MAXIMO DE %d caracteres]:\n", TAM - 1);
    fgets(frase, TAM, stdin); // Leitura da string
    
    MostraPalavras(frase); // Chamada da função

    return 0;
}
