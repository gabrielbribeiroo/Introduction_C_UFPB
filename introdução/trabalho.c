/*
Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas. 
Calcule e mostre o salário a receber, de acordo com as regras a seguir: 
    • A hora trabalhada vale 1/8 do salário mínimo; 
    • A hora extra vale ¼ do salário mínimo; 
    • O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
    • A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da 
hora extra; 
    • O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/

#include <stdio.h>

int main() {
    int horas_trabalho, horas_extra;
    float salario_minimo, salario;
    printf("Digite o valor do salario minimo atual: \n");
    scanf("%f", &salario_minimo);
    printf("Digite a quantidade de horas trabalhadas: \n");
    scanf("%d", &horas_trabalho);
    printf("Digite a quantidade de horas extras: \n");
    scanf("%d", &horas_extra);

    salario = ((horas_trabalho*0.125*salario_minimo) + (horas_extra*0.25*salario_minimo));

    printf("Salario a receber: %.2f\n", salario);
    return 0;
}