/*
Escreva um programa que verifique a validade de uma senha, sendo a senha válida “teste”. 
Se o usuário não acertar a senha, o programa deve emitir a mensagem “Acesso negado”, caso contrário “Acesso permitido”. 
Informar também o número de tentativas do usuário.
*/

#include <stdio.h>
#include <string.h>

#define TAM 6 // Define uma constante TAM de valor 6 que representa o tamanho da string

int VerificaSenha(const char *str, int *c) {
    (*c)++; // Contador de tentativas

    // Compara a string digitada com a senha "teste" (correta)
    if (strcmp(str, "teste") == 0) {
        printf("Acesso permitido"); // Acertou
        return 0;
    } 
    else {
        printf("Acesso negado\n"); // Errou
        return 1;
    }
}

int main() {
    char senha[TAM];
    int cont = 0;

    do {
        printf("\nDigite a senha: \n");
        scanf("%s", senha); // Leitura da string
    } while (VerificaSenha(senha, &cont)); // Enquanto ela estiver errada

    printf("\n\nTentativas: %d\n", cont); // Mostra a quantidade de tentativas

    return 0;
}