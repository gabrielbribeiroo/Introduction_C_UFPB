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

#define TAM 101

void MostraPalavras(const char *str) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    printf("%c", str[i]);

    if (str[i] == ' ') {
      printf("\n");
    }
  }
}

int main() {
  char frase[TAM];

  printf("Digite a frase [MAXIMO DE %d caracteres]:\n", TAM - 1);
  fgets(frase, TAM, stdin);
  
  MostraPalavras(frase);

  return 0;
}
