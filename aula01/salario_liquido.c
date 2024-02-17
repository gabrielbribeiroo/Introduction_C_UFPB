#include <stdio.h>

int main() {
    float salario_bruto, salario_liquido;
    printf("Digite seu salario bruto: \n");
    scanf("%f", &salario_bruto);

    salario_liquido = (salario_bruto*1.38*1.2*0.85);

    printf("Salario liquido: %.2f\n", salario_liquido);

    return 0;
}