/*
Escreva um programa que verifique a validade de uma senha, sendo a senha válida “teste”. 
Se o usuário não acertar a senha, o programa deve emitir a mensagem “Acesso negado”, caso contrário “Acesso permitido”. 
Informar também o número de tentativas do usuário.
*/

#include <stdio.h>
#include <string.h>

#define TAM 6

int VerificaSenha(const char *str, int *c) {
    (*c)++;

    if (strcmp(str, "teste") == 0) {
        printf("Acesso permitido");
        return 0;
    } 
    else {
        printf("Acesso negado\n");
        return 1;
    }
}

int main() {
    char senha[TAM];
    int cont = 0;

    do {
        printf("\nDigite a senha: \n");
        scanf("%s", senha);
    } while (VerificaSenha(senha, &cont));

    printf("\n\nTentativas: %d\n", cont);

    return 0;
}