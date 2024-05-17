/*
Implemente uma função que junta/concatena duas strings, assim como a função strcat().
*/

#include <stdio.h>
#include <string.h>

#define TAM 51 // Define uma constante TAM de valor 51 que representa o tamanho da string

void ConcatenarStrings(char *str1, const char *str2) {
    while (*str1 != '\0') {
        str1++; // Posições da string 1
    }

    while (*str2 != '\0') {
        *str1 = *str2; // Atualiza o valor da string 1 copiando a string 2
        str1++;
        str2++;
    }

    *str1 = '\0'; // Encerra a string com o \0
}

void RemoverEspacos(char *str) {
    int i, j, t = strlen(str);

    for (i=0, j=0; i<t; i++) {
        // Verifica se o caractere é um espaço
        if (str[i] != ' ') {
            str[j++] = str[i]; // Copia apenas os caracteres diferentes de espaço
        }
    }

    str[j] = '\0'; // Encerra a string com o \0
}

int main() {
    char frase1[TAM], frase2[TAM];

    // Leitura das strings, removendo o último \n e substituindo por \0 (encerrando a string)
    printf("String 1 [MAXIMO DE %d CARACTERES]:\n", TAM-1);
    fgets(frase1, sizeof(frase1), stdin); 
    frase1[strcspn(frase1, "\n")] = '\0';
    printf("String 2 [MAXIMO DE %d CARACTERES]:\n", TAM-1);
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0';

    // Verifica se o tamanho das strings condiz com o tamanho máximo do problema
    if ((strlen(frase1) > TAM-1) || (strlen(frase2) > TAM-1)) {
        printf("ERRO: A string fornecida excede o tamanho maximo permitido.\n");
        return 1;
    }

    // Chamada das funções
    ConcatenarStrings(frase1, frase2);
    RemoverEspacos(frase1);

    printf("String concatenada:\n%s\n", frase1); // Mostra a string concatenada
    return 0;
}