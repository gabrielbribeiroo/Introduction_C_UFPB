/*
 Faça um programa que receba uma senha formada de números inteiros.
 Verifique se a senha está correta e, caso não esteja, solicite novamente a senha. 
 Se a senha entrada for a correta, deverá ser apresentada a mensagem “Senha Correta”, caso contrário, “Senha Incorreta”. 
 Determine e mostre o número de tentativas do usuário.
*/

#include <stdio.h>

#define senha 1029 // Define o valor de uma constante para senha correta

int main() {
    int tentativa, qnt_tentativas=1;
    printf("Digite a senha: \n");
    scanf("%d", &tentativa); // Lê a senha digitada pelo usuário

    while (!(senha == tentativa)) {
        printf("SENHA INCORRETA! Tente novamente. \n");
        scanf("%d", &tentativa); // Lê outra senha, até que seja digitada a correta
        qnt_tentativas++; // Aumenta a quantidade de tentativas de 1 em 1
    }

    printf("SENHA CORRETA! \n");
    printf("Quantidade de tentativas do usuario: %d\n", qnt_tentativas);

    return 0;
}