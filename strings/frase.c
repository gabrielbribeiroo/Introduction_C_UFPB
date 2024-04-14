/*
Ler uma frase e contar o número de palavras dessa frase. 
Considere que as palavras estão separadas por espaços.
*/

#include <stdio.h>

int QuantidadePalavras(const char *str) {
    int i, cont = 1;

    for (i=0; str[i]!='\0'; i++) {
        if ((str[i]==' ') && (str[i+1]!=' ') && (str[i+1]!='\0')) {
            cont++;
        }
    }

    return cont;
}

int main() {
    char frase[101];

    printf("Digite uma frase: [MAXIMO DE 100 CARACTERES]\n");
    fgets(frase, 101, stdin);

    printf("A frase %s possui %d palavras.", frase, QuantidadePalavras(frase));
    
    return 0;
}
