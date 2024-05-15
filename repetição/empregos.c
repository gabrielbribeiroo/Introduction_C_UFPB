/*
Escreva um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual. 
Calcule e mostre o cargo, o valor do aumento e seu novo salário. 
Os cargos estão na tabela a seguir.
Código Cargo Percentual
1 Escriturário 50%
2 Secretário 35%
3 Caixa 20%
4 Gerente 10%
5 Diretor Não tem aumento
*/

#include <stdio.h>

int main() {
    int cargo;
    float salario_atual;

    printf("|---TABELA DE CARGOS---|\n");
    printf("|Codigo|---Cargo---|--Percentual-|\n");
    printf("|--[1]-|Escrituario|50(por cento)|\n");
    printf("|--[2]-|Secretario-|35(por cento)|\n");
    printf("|--[3]-|Caixa------|20(por cento)|\n");
    printf("|--[4]-|Gerente----|10(por cento)|\n");
    printf("|--[5]-|Diretor----|-------------|\n");
    printf("Selecione o cargo do funcionario: \n");
    scanf("%d", &cargo); // Lê o cargo do funcionário

    // Calcula o salário para o cargo digitado
    switch (cargo) { 
    case 1: // Escrituário
        printf("Qual o salario do funcionario? \n");
        scanf("%f", &salario_atual);
        printf("O novo salario para o cargo de escrituario sera de %.2f reais. \n", salario_atual*1.5);
        break;
    case 2: // Secretário
        printf("Qual o salario do funcionario? \n");
        scanf("%f", &salario_atual);
        printf("O novo salario para o cargo de secretario sera de %.2f reais. \n", salario_atual*1.35);
        break;
    case 3: // Caixa
        printf("Qual o salario do funcionario? \n");
        scanf("%f", &salario_atual);
        printf("O novo salario para o cargo de caixa sera de %.2f reais. \n", salario_atual*1.2);
        break;
    case 4: // Gerente
        printf("Qual o salario do funcionario? \n");
        scanf("%f", &salario_atual);
        printf("O novo salario para o cargo de gerente sera de %.2f reais. \n", salario_atual*1.1);
        break;
    case 5: // Diretor
        printf("Qual o salario do funcionario? \n");
        scanf("%f", &salario_atual);
        printf("O cargo de diretor nao tera aumento, entao o salario continua sendo de %.2f reais. \n", salario_atual);
        break;
    default: // Padrão/nenhuma
        printf("OPCAO INVALIDA. TENTE NOVAMENTE! \n");
    }
}

