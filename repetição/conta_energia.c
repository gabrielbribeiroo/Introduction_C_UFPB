/*
Escreva um programa que calcule o Valor a Pagar pela conta de energia elétrica para uma determinada Classe Consumidora. 
Veja as informações a seguir:
    a) O programa deve receber como dados de entrada: o tipo da Classe Consumidora, (conforme definido na Tabela 1) 
e o Consumo em quilowatts/hora (KWh);
    b) O cálculo do Valor do Fornecimento (VF), em Reais (R$), é definido pela seguinte fórmula: VF = Consumo x Tarifa, 
onde a tarifa é definida na Tabela 1, conforme a classe consumidora;
    c) O Valor a Pagar (VP) é definido pela seguinte fórmula: VP = VF + ICMS, 
onde a taxa de ICMS é calculada aplicando uma alíquota de 30% ao valor do fornecimento (ICMS = 0.3 x VF).
Classe Consumidora Tarifa (R$)
A                   0.5
B                   0.8
C                   1.0
*/

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
    scanf("%d", &classe); // Lê a classe consumidora
    switch (classe) { // Executa o cálculo para classe digitada
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
            printf("OPCAO INVALIDA. TENTE NOVAMENTE! \n");
    }
    return 0;
}