#include <stdio.h>

int main() {
    float num1, num2, num3, maior, meio, menor;
    printf("Digite tres valores: \n");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1>num2 && num2>num3) {
        maior = num1;
        meio = num2;
        menor = num3;
        printf("Ordem Crescente dos valores digitados: %.2f > %.2f > %.2f \n", maior, meio, menor);
    }
    else {
        if (num1>num2) {
            maior = num1;
            meio = num3;
            menor = num2;
            printf("Ordem Crescente dos valores digitados: %.2f > %.2f > %.2f \n", maior, meio, menor);
        }
        else {
            if (num1>num3) {
                maior = num2;
                meio = num1;
                menor = num3;
                printf("Ordem Crescente dos valores digitados: %.2f > %.2f > %.2f \n", maior, meio, menor);
            }
            else {
                if (num2>num3){
                    maior = num2;
                    meio = num3;
                    menor = num1;
                    printf("Ordem Crescente dos valores digitados: %.2f > %.2f > %.2f \n", maior, meio, menor);                            
                }
                else {
                    if (num3>num2) {
                        maior = num3;
                        meio = num2;
                        menor = num1;
                        printf("Ordem Crescente dos valores digitados: %.2f > %.2f > %.2f \n", maior, meio, menor);
                    }
                    else {
                        maior = num3;
                        meio = num1;
                        menor = num2;
                        printf("Ordem Crescente dos valores digitados: %.2f > %.2f > %.2f \n", maior, meio, menor);
                    }
                }
            }
        }
    }
    return 0;
}