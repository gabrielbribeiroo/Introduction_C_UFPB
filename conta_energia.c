#include <stdio.h>

int main() {
    float consumo, valor_fornecimento, valor_fatura, icms;
    int classe;
    printf("|--- TABELA DE TARIFAS ---|\n");
    printf("|Classe Consumidora|Tarifa|\n");
    printf("|[1]------A--------|--0.5-|\n");
    printf("|[2]------B--------|--0.8-|\n");
    printf("|[3]------C--------|--1.0-|\n");
    printf("Selecione a classe do consumidor: \n");
    scanf("%d", &classe);
    switch (classe) {
        case 1:
            printf("Qual o consumo, em kwh, do consumidor no mes? \n");
            scanf("%f", &consumo);
            valor_fornecimento = consumo*0.5;
            icms = valor_fornecimento*0.3;
            valor_fatura = valor_fornecimento + icms;
            printf("Valor da fatura: %.2f reais. \n", valor_fatura);
            printf("Valor do fornecimento de energia: %.2f reais. \n", valor_fornecimento);
            printf("Valor do ICMS: %.2f reais. \n", icms);
            break;
        
        case 2:
            printf("Qual o consumo, em kwh, do consumidor no mes? \n");
            scanf("%f", &consumo);
            valor_fornecimento = consumo*0.8;
            icms = valor_fornecimento*0.3;
            valor_fatura = valor_fornecimento + icms;
            printf("Valor da fatura: %.2f reais. \n", valor_fatura);
            printf("Valor do fornecimento de energia: %.2f reais. \n", valor_fornecimento);
            printf("Valor do ICMS: %.2f reais. \n", icms);
            break;

        case 3:
            printf("Qual o consumo, em kwh, do consumidor no mes? \n");
            scanf("%f", &consumo);
            valor_fornecimento = consumo;
            icms = valor_fornecimento*0.3;
            valor_fatura = valor_fornecimento + icms;
            printf("Valor da fatura: %.2f reais. \n", valor_fatura);
            printf("Valor do fornecimento de energia: %.2f reais. \n", valor_fornecimento);
            printf("Valor do ICMS: %.2f reais. \n", icms);
            break;

        default:
            printf("OPCAfaafO INVALIDA. TENTE NOVAMENTE! \n");
    }
    return 0;
}