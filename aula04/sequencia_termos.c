/*
Faça um programa que leia o número de termos.
Determine e mostre os valores de acordo com a série:
2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, ...
OBS: os três primeiros termos da série são 2, 7 e 3. 
Os demais termos são formados multiplicando o primeiro termo por 2, o segundo termo por 3 e o terceiro termo por 4...
*/
#include <stdio.h>

int main() {
    int qnt_termos, termo1 = 2, termo2 = 7, termo3 = 3;

    printf("Ate qual termo da sequência voce quer? \n");
    scanf("%d", &qnt_termos);

    if (qnt_termos < 3) {
        printf("A sequenicia requer pelo menos 3 numeros. Tente novamente. \n");
        return 1; // retorna um erro
    }

    printf("Os %d primeiros termos da serie: %d, %d, %d, ", 3, termo1, termo2, termo3);

    for (int i = 4; i <= qnt_termos; i++) {
        if (i % 3 == 1) {
            termo1 = termo1 * 2;
            printf("%d, ", termo1);
        } else if (i % 3 == 2) {
            termo2 = termo2 * 3;
            printf("%d, ", termo2);
        } else {
            termo3 = termo3 * 4;
            printf("%d, ", termo3);
        }
    }

    printf("\n");

    return 0;
}