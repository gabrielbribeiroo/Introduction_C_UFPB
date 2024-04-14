/*
Implemente uma função que junta/concatena duas strings, assim como a função strcat().
*/

#include <stdio.h>
#include <string.h>

#define TAM 51

void ConcatenarStrings(char *str1, const char *str2) {
    while (*str1 != '\0') {
        str1++;
    }

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

void RemoverEspacos(char *str) {
    int i, j, t = strlen(str);

    for (i=0, j=0; i<t; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main() {
    char frase1[TAM], frase2[TAM];

    printf("String 1 [MAXIMO DE %d CARACTERES]:\n", TAM-1);
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0';

    printf("String 2 [MAXIMO DE %d CARACTERES]:\n", TAM-1);
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0';

    if ((strlen(frase1) > TAM-1) || (strlen(frase2) > TAM-1)) {
        printf("ERRO: A string fornecida excede o tamanho maximo permitido.\n");
        return 1;
    }

    ConcatenarStrings(frase1, frase2);
    RemoverEspacos(frase1);

    printf("String concatenada:\n%s\n", frase1);
    return 0;
}