/*
Sabe-se que o quilowatt de energia custa 1/5 do salário mínimo. 
Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. 
Calcule e mostra: 
    • O valor de cada quilowatt; 
    • O valor a ser pago por essa residência; 
    • O valor a ser pago com desconto de 15%.
*/

#include <stdio.h>

int main() {
    float salario_minimo, quilowatts, valor;

    printf("----------CONSUMO DE QUILOWATTS----------\n");
    printf("Digite o valor do salario minimo atual: \n");
    scanf("%f", &salario_minimo); // Lê o salário
    printf("Digite o consumo atual de quilowatts: \n");
    scanf("%f", &quilowatts); // Lê o consumo

    valor = quilowatts * 0.2 * salario_minimo; // Calcula o valor da conta

    // Mostra as informações
    printf("Valor de cada quilowatt: %.2f\n", 0.2*salario_minimo);
    printf("Valor do consumo: %.2f\n", valor);
    printf("Valor a ser pago [DESCONTO DE 15 POR CENTO]: %.2f\n", 0.85*valor);
    
    return 0;
}