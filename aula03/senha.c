#include <stdio.h>

#define senha 1029

int main() {
    int tentativa, qnt_tentativas=1;
    printf("Digite a senha: \n");
    scanf("%d", &tentativa);

    while (!(senha == tentativa)) {
        printf("SENHA INCORRETA! Tente novamente. \n");
        scanf("%d", &tentativa);
        qnt_tentativas++;
    }
    printf("SENHA CORRETA! \n");
    printf("Quantidade de tentativas do usuario: %d\n", qnt_tentativas);

    return 0;
}