/*
Escreva um programa que receba o nome completo de um usuário e gere o seu login. 
O login será composto pela primeira letra de cada nome em letras maiúsculas e as mesmas letras minúsculas. 
O login deve estar em uma nova string.
Nome: Pedro Hansdorf                >>          Login: PHph
Nome: Robson Soares Soares          >>          Login: RSSrss
Nome: Olívia Silva Santos Marques   >>          Login: OSSMossm
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 101

void GerarLogin(const char *n, char *l) {
    int i, j = 0, t = strlen(n);

    for (i=0; i<t; i++) {
        if (((i==0) || (n[i-1] == ' ') || (n[i-1] == '-')) && (isalpha(n[i]))) {
            l[j++] = toupper(n[i]);
        }
    }

    for (i=0; i<t; i++) {
        if (((i==0) || (n[i-1] == ' ') || (n[i-1] == '-')) && (isalpha(n[i]))) {
            l[j++] = tolower(n[i]);
        }
    }

    l[j] = '\0';
}

int main() {
    char nome[TAM], login[TAM];

    printf("Nome completo do usuario: [MAXIMO DE %d CARACTERES]\n", TAM-1);
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    if (strlen(nome) > TAM-1) {
        printf("ERRO: O nome fornecido excede o tamanho maximo permitido.\n");
        return 1;
    }

    GerarLogin(nome, login);

    printf("Login gerado para o usuario: %s\n", login);

    return 0;
}