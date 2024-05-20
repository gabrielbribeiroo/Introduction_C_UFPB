/*
Fazer um programa que leia uma string e converta todos os caracteres desta string para maiúsculo. 
Depois de convertida a string, exibir o resultado na tela.
Dicas:
(1) Uma string de caracteres é um vetor do tipo char, terminado pelo caractere ‘\0’;
(2) O código ASCII da letra ‘a’ (minúsculo) é 97 e o código da letra ‘A’ (maiúsculo) é 65, o código da letra ‘z’ é 122 e o código da letra ‘Z’ é 90;
(3) Cuidado para não acabar convertendo aquilo que não é nem texto e nem está em minúsculas! 
Por exemplo: 
Entre com um texto: Prezados Alunos de IP (2023.2)
Texto convertido: PREZADOS ALUNOS DE IP (2023.2)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string

void LerString(char *texto) {
    printf("Digite um texto [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(texto, TAM, stdin); // Leitura da string
    texto[strcspn(texto, "\n")] = '\0'; // Substitui o \n da string pelo \0 (encerramento)
}

void ConverterParaMaiusculas(char *texto) {
    int i = 0;
    while (texto[i] != '\0') {
        // Verifica se o caractere é minúsculo
        if (islower(texto[i])) {
            texto[i] = toupper(texto[i]); // Transforma o caractere para maiúsculo
        }
        i++;
    }
}

void MostrarString(char *texto) {
    printf("Texto convertido para letras maiusculas: %s\n", texto); // Mostra a string
}

int main() {
    char texto[TAM];

    // Chamada das funções
    LerString(texto);
    ConverterParaMaiusculas(texto);
    MostrarString(texto);

    return 0;
}

