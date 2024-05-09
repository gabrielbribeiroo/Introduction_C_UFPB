/*
Faça um programa que apresente o menu de opções a seguir.
Execute e mostre os resultados, de acordo com a opção escolhida pelo usuário.
Menu de opções:
1. Adição
2. Subtração
3. Multiplicação
4. Divisão
0. Sair
Escolha a opção desejada:
*/

#include <stdio.h>

int main() {
    int operacao;
    float num1, num2;

    // Looping de calculadora básica
    do {
        printf("Menu de opcoes: \n"
            "1. Adicao \n"
            "2. Subtracao \n"
            "3. Multiplicacao \n"
            "4. Divisao \n"
            "0. Sair \n"
            "Escolha a opcao desejada: \n");
        scanf("%d", &operacao);
        if ((operacao != 0) && (operacao >= 1) && (operacao <= 4)) {
            printf("Digite dois numeros: \n");
            scanf("%f %f", &num1, &num2);
        }
        switch (operacao) {
            case 1: 
                printf("%.2f + %.2f = %.2f \n\n", num1, num2, num1+num2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f \n\n", num1, num2, num1-num2);
                break;
            case 3:
                printf("%.2f * %.2f = %.2f \n\n", num1, num2, num1*num2);
                break;
            case 4:
                if (num2 != 0) 
                    printf("%.2f / %.2f = %.2f \n\n", num1, num2, num1/num2);
                else 
                    printf("ERRO! Divisao por zero. \n\n");
                break;
            case 0:
                printf("Fim do programa. \n\n");
                break;
            default:
                printf("OPCAO INVALIDA! Tente novamente. \n\n");                    
        }
    }while (operacao != 0);

    return 0;
}