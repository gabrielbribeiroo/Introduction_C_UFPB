#include <stdio.h>

int main() {
    float salario_minimo, quilowatts, valor;
    printf("----------CONSUMO DE QUILOWATTS----------\n");
    printf("Digite o valor do salario minimo atual: \n");
    scanf("%f", &salario_minimo);
    printf("Digite o consumo atual de quilowatts: \n");
    scanf("%f", &quilowatts);

    valor = quilowatts * 0.2 * salario_minimo;

    printf("Valor de cada quilowatt: %.2f\n", 0.2*salario_minimo);
    printf("Valor do consumo: %.2f\n", valor);
    printf("Valor a ser pago [DESCONTO DE 15 POR CENTO]: %.2f\n", 0.85*valor);
    
    return 0;
}