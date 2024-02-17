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