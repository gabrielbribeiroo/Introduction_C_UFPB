#include <stdio.h>

int main() {
    int masc_1, masc_2, fem_1, fem_2, masc_velho, masc_novo, fem_velha, fem_nova;
    printf("Digite as idades de dois homens: \n");
    scanf("%d %d", &masc_1, &masc_2);
    printf("Digite as idades de duas mulheres: \n");
    scanf("%d %d", &fem_1, &fem_2);
    if (masc_1>masc_2 && fem_1>fem_2) {
        masc_velho = masc_1;
        masc_novo = masc_2;
        fem_velha = fem_1;
        fem_nova = fem_2;
        printf("Soma (idade do homem mais velho + idade da mulher mais nova) = %d + %d = %d\n", masc_velho, fem_nova, masc_velho+fem_nova);
        printf("Produto (idade do homem mais novo * idade da mulher mais velha) = %d * %d = %d\n", masc_novo, fem_velha, masc_novo*fem_velha);
    }
    else {
        if (masc_1>masc_2) {
        masc_velho = masc_1;
        masc_novo = masc_2;
        fem_velha = fem_2;
        fem_nova = fem_1;
        printf("Soma (idade do homem mais velho + idade da mulher mais nova) = %d + %d = %d\n", masc_velho, fem_nova, masc_velho+fem_nova);
        printf("Produto (idade do homem mais novo * idade da mulher mais velha) = %d * %d = %d\n", masc_novo, fem_velha, masc_novo*fem_velha);
        }
        else {
            if (fem_1>fem_2) {
                masc_velho = masc_2;
                masc_novo = masc_1;
                fem_velha = fem_1;
                fem_nova = fem_2;
                printf("Soma (idade do homem mais velho + idade da mulher mais nova) = %d + %d = %d\n", masc_velho, fem_nova, masc_velho+fem_nova);
                printf("Produto (idade do homem mais novo * idade da mulher mais velha) = %d * %d = %d\n", masc_novo, fem_velha, masc_novo*fem_velha);
            }
            else {
                masc_velho = masc_2;
                masc_novo = masc_1;
                fem_velha = fem_2;
                fem_nova = fem_1;
                printf("Soma (idade do homem mais velho + idade da mulher mais nova) = %d + %d = %d\n", masc_velho, fem_nova, masc_velho+fem_nova);
                printf("Produto (idade do homem mais novo * idade da mulher mais velha) = %d * %d = %d\n", masc_novo, fem_velha, masc_novo*fem_velha);
            }
        }
    }
    return 0;
}