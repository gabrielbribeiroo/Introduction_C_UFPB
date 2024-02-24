/*
Faça um programa que leia o salário bruto de um funcionário.
Calcule e mostre o seu salário líquido. 
Sabe-se que: 
    • O salário bruto teve um reajuste de 38%; 
    • O funcionário receberá uma gratificação de 20% do salário bruto; 
    • O salário total é descontado em 15%.
*/

#include <stdio.h>

int main() {
    float salario_bruto, salario_liquido;
    printf("Digite seu salario bruto: \n");
    scanf("%f", &salario_bruto);

    salario_liquido = (salario_bruto*1.38*1.2*0.85);

    printf("Salario liquido: %.2f\n", salario_liquido);

    return 0;
}