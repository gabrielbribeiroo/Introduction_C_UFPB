/*
Faça um programa para ler 3 valores e escrever a soma dos 2 maiores. 
Considere que o usuário não informará valores iguais.
*/

#include <stdio.h>

int main () {
    float num1, num2, num3, maior, maior_2;
    printf("Digite tres valores: \n");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1>num2 && num2>num3) {
        maior = num1;
        maior_2 = num2;
        printf("Soma dos maiores valores: %.2f + %.2f \n", maior, maior_2);
    }
    else {
        if (num1>num2) {
            maior = num1;
            maior_2 = num3;
            printf("Soma dos maiores valores: %.2f + %.2f \n", maior, maior_2);
        }
        else {
            if (num1>num3) {
                maior = num2;
                maior_2 = num1;
                printf("Soma dos maiores valores: %.2f + %.2f \n", maior, maior_2);
            }
            else {
                if (num2>num3){
                    maior = num2;
                    maior_2 = num3;
                    printf("Soma dos maiores valores: %.2f + %.2f \n", maior, maior_2);                               
                }
                else {
                    if (num3>num2) {
                        maior = num3;
                        maior_2 = num2;
                        printf("Soma dos maiores valores: %.2f + %.2f \n", maior, maior_2); 
                    }
                    else {
                        maior = num3;
                        maior_2 = num1;
                        printf("Soma dos maiores valores: %.2f + %.2f \n", maior, maior_2);    
                    }
                }
            }
        }
    }
    return 0;
}