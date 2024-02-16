#include <stdio.h>

int main () {
    float num1, num2, num3, maior, menor;
    printf("Digite tres valores: \n");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num2>num1 && num2>num3) {
        maior = num2;
    }
    else {
        if (num3>num1) {
        maior = num3;
        }
        else {
            maior = num1;
        }
    }
    if (num2<num1 && num2<num3) {
        menor = num2;
    }
    else {
        if (num3<num1) {
            menor = num3;
        }
        else {
            menor = num1;
        }
    }

    printf("O maior valor eh: %.2f\n", maior);
    printf("O menor valor eh: %.2f\n", menor);

    return 0;
}