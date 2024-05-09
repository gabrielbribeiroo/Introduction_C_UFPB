/*
Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não, de um novo produto lançado
no mercado. 
Para isso forneceu o sexo do entrevistado (masculino, feminino) e a sua resposta (sim, não). 
Sabendo-se que foram entrevistadas 20 pessoas, fazer um programa que calcule e escreva:
    a) o número de pessoas que responderam sim,
    b) o número de pessoas que responderam não,
    c) a porcentagem de pessoas do sexo feminino que responderam sim,
    d) a porcentagem de pessoas do sexo masculino que responderam não.
*/

#include <stdio.h>

int main() {
    int qnt_sim = 0, qnt_nao = 0, qnt_fem_sim = 0, qnt_masc_nao = 0, tot_fem = 0, tot_masc = 0;
    float percent_fem_sim, percent_masc_nao;
    char sexo, opiniao;
    
    printf("--------------- PESQUISA DE MERCADO ---------------\n");

    for (int i = 1; i <= 20; i++) {
        printf("Digite o sexo [M(masculino) / F(feminino)]: \n");
        scanf(" %c", &sexo); // Lê o sexo
        printf("Gostou do produto [S(sim) / N(nao)]? \n");
        scanf(" %c", &opiniao); // Lê a opinião

        // Verificação do sexo e da opinião
        if ((sexo == 'M') && (opiniao == 'N')) {
            tot_masc++;
            qnt_masc_nao++;
            qnt_nao++;
        } else if (sexo == 'M') {
            tot_masc++;
            qnt_sim++;
        } else if ((sexo == 'F') && (opiniao == 'S')) {
            tot_fem++;
            qnt_fem_sim++;
            qnt_sim++;
        } else {
            tot_fem++;
            qnt_nao++;
        }        
    }

    // Cálculo das porcentagens
    percent_fem_sim = ((float)qnt_fem_sim / tot_fem) * 100;
    percent_masc_nao = ((float)qnt_masc_nao / tot_masc) * 100;

    printf("\nNumero de pessoas que responderam sim: %d; \n"
            "Numero de pessoas que responderam não: %d; \n"
            "Porcentagem de pessoas do sexo feminino que responderam sim: %.2f por cento; \n"
            "Porcentagem de pessoas do sexo masculino que responderam não: %.2f por cento. \n", qnt_sim, qnt_nao, percent_fem_sim, percent_masc_nao);
    
    return 0;
}