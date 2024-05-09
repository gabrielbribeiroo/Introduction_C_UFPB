/*
Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os 
seguintes dados, referentes a cada habitante, para serem analisados: 
    - Sexo (masculino ou feminino);
    - Cor dos olhos (azuis, verdes ou castanhos);
    - Cor dos cabelos (loiros, castanhos ou pretos);
    - Idade.
Para cada habitante, foram lidos os dados acima e o último dado, que não corresponde a ninguém, contém o valor da 
idade igual a -1. 
Fazer um programa que determine e escreva:
    a) a maior idade entre os habitantes;
    b) a porcentagem de indivíduos do sexo feminino, cuja idade está entre 18 e 35 anos e,
que tenham olhos verdes e cabelos loiros.
*/

#include <stdio.h>

int main() {
    int idade, maior_idade = 0, qnt_tot_fem = 0, qnt_fem = 0;
    float percentual_fem;
    char sexo, cor_olho, cor_cabelo;

    printf("Digite a idade [-1 p/ FINALIZAR]: \n");
    scanf ("%d", &idade); // Lê a idade

    while (idade != -1) {
        printf("Digite o sexo [M(masculino) / F(feminino)]: \n");
        scanf(" %c", &sexo); // Lê o sexo

        if (sexo == 'F') {
            qnt_tot_fem++; // Aumenta a quantidade de mulheres de 1 em 1
        }

        printf("Digite a cor dos olhos [A(azuis) / V(verdes) / C(castanhos)]: \n");
        scanf(" %c", &cor_olho); // Lê a cor do olho
        printf("Digite a cor dos cabelos [L(loiros) / C(castanhos) / P(pretos)]: \n");
        scanf(" %c", &cor_cabelo); // Lê a cor do cabelo
        
        if (idade > maior_idade) {
            maior_idade = idade; // Atualiza a maior idade
        }

        if ((idade >= 18) && (idade <= 35) && (sexo == 'F') && (cor_olho == 'V') && (cor_cabelo == 'L')) {
            qnt_fem++;
        }

        printf("Digite a idade [-1 P/ FINALIZAR]: \n");
        scanf ("%d", &idade);
    }

    percentual_fem = ((float)qnt_fem / qnt_tot_fem) * 100; // Calcula a porcentagem

    printf("\n");
    printf("Maior idade entre os habitantes = %d. \n", maior_idade);
    if (qnt_tot_fem > 0) {
        printf("Porcentagem de mulheres, entre 18 e 35 anos, que tenham olhos verdes e cabelos loiros. = %.2f por cento. \n", percentual_fem);
    } 
    else {
        printf("Nao foram registradas mulheres. \n");
    }

    return 0;
}