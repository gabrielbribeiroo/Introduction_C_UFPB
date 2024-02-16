#include <stdio.h>

int main(void){

    float numero1, numero2;
    int escolha;

    printf("----------  CALCULADORA  ---------- \n\n");
    printf("******** MENU DE OPERACAO ******* \n\n");
    printf("  [1] ADICAO \n");
    printf("  [2] SUBTRACAO \n");
    printf("  [3] DIVISAO \n");
    printf("  [4] MULTIPLICACAO \n");
    printf("Selecione a operacao que voce deseja realizar: \n");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            printf("VOCE ESCOLHEU A OPCAO DE ADICAO... \n");
            printf("Digite dois valores: \n");
            scanf("%f %f", &numero1, &numero2);
            printf("O resultado da sua adicao, entre os numeros %.2f e %.2f, eh %.2f \n", numero1, numero2, numero1+numero2);
            break;

        case 2:
            printf("VOCE ESCOLHEU A OPCAO DE SUBTRACAO... \n");
            printf("Digite dois valores: \n");
            scanf("%f %f", &numero1, &numero2);
            printf("O resultado da sua subtracao, entre os numeros %.2f e %.2f, eh %.2f \n", numero1, numero2, numero1-numero2);
            break;

        case 3:
            printf("VOCE ESCOLHEU A OPCAO DE DIVISAO... \n");
            printf("Digite dois valores: \n");
            scanf("%f %f", &numero1, &numero2);
            printf("O resultado da sua divisao, entre os numeros %.2f e %.2f, eh %.2f \n", numero1, numero2, numero1/numero2);
            break;

        case 4: 
            printf("VOCE ESCOLHEU A OPCAO DE MULTIPLICACAO... \n");
            printf("Digite dois valores: \n");
            scanf("%f %f", &numero1, &numero2);
            printf("O resultado da sua multiplicacao, entre os numeros %.2f e %.2f, eh %.2f \n", numero1, numero2, numero1*numero2);
            break;

        default:
            printf("Voce digitou uma opcao invalida. Tente novamente! \n");
    }
    return 0; 
}
