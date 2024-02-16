#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    int operacao;
    printf("Selecione a opcao desejada: \n");
    printf("[1] Somar dois numeros \n");
    printf("[2] Raiz quadrada de um numero \n");
    scanf("%d", &operacao);

    switch(operacao) {
        case 1:
            printf("Digite dois numeros: \n");
            scanf("%f %f", &num1, &num2);
            printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
            break;
        case 2:
            printf("Digite o numero: \n");
            scanf("%f", &num1);
            printf("Raiz Quadrada de %.2f = %.2f", num1, sqrt(num1));
            break;
        default:
            printf("OPCAO INVALIDA. TENTE NOVAMENTE!");
    }
    return 0;
}