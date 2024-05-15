/*
Faça um programa que leia 2 valores inteiros e uma das seguintes operações a serem executadas 
(codificada das eguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). 
Calcular e escrever o resultado dessa operação sobre os dois valores lidos.
*/

#include <stdio.h>

int main(void) {
    int numero1, numero2, escolha;

    printf("----------  CALCULADORA  ---------- \n\n");
    printf("******** MENU DE OPERACAO ******* \n\n");
    printf("  [1] ADICAO \n");
    printf("  [2] SUBTRACAO \n");
    printf("  [3] DIVISAO \n");
    printf("  [4] MULTIPLICACAO \n");
    printf("Selecione a operacao que voce deseja realizar: \n");
    scanf("%d", &escolha); // Lê a operação desejada

    // Realiza a operação, de acordo com o valor digitado
    switch (escolha){ 
        case 1: // Adição
            printf("VOCE ESCOLHEU A OPCAO DE ADICAO... \n");
            printf("Digite dois valores: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("O resultado da sua adicao, entre os numeros %d e %d, eh %d \n", numero1, numero2, numero1+numero2);
            break;

        case 2: // Subtração
            printf("VOCE ESCOLHEU A OPCAO DE SUBTRACAO... \n");
            printf("Digite dois valores: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("O resultado da sua subtracao, entre os numeros %d e %d, eh %d \n", numero1, numero2, numero1-numero2);
            break;

        case 3: // Divisão
            printf("VOCE ESCOLHEU A OPCAO DE DIVISAO... \n");
            printf("Digite dois valores: \n");
            scanf("%d %d", &numero1, &numero2);
            if (numero2 != 0) {
                printf("O resultado da sua divisao, entre os numeros %d e %d, eh %d \n", numero1, numero2, numero1/numero2);
            }
            else {
                printf("ERRO! Divisao por zero... \n");
            }
            
            break;

        case 4: // Multiplicação
            printf("VOCE ESCOLHEU A OPCAO DE MULTIPLICACAO... \n");
            printf("Digite dois valores: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("O resultado da sua multiplicacao, entre os numeros %d e %d, eh %d \n", numero1, numero2, numero1*numero2);
            break;

        default: // Padrão/nenhuma
            printf("Voce digitou uma opcao invalida. Tente novamente! \n");
    }
    return 0; 
}
