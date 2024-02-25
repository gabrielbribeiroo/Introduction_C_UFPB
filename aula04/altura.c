/*
Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) de 15 pessoas. 
Faça um programa que calcule e mostre:
    a) a maior e a menor altura do grupo;
    b) a média de altura das mulheres;
    c) o número de homens.
*/

#include <stdio.h>

int main() {
    int qnt_masc = 0, qnt_fem = 0;
    float altura, maior_altura = 0, menor_altura = 3, soma_altura_fem = 0, media_altura_fem;
    char sexo;

    for (int i = 1; i <= 15; i++) {
        printf("Digite a altura da pessoa: \n");
        scanf("%f", &altura);
        printf("Digite o sexo da pessoa [M(masculino) / F(feminino)]: \n");
        scanf(" %c", &sexo);

        if (sexo == 'M') {
            qnt_masc++;
        } else {
            qnt_fem++;
            soma_altura_fem += altura;
        }

        if (altura > maior_altura) {
            maior_altura = altura;
        }

        if (altura < menor_altura) {
            menor_altura = altura;
        }
    }

    media_altura_fem = soma_altura_fem / qnt_fem;

    printf("\nMenor altura do grupo: %.2f\n"
            "Maior altura do grupo: %.2f\n"
            "Media da altura das mulheres: %.2f\n"
            "Numero de homens: %d\n", menor_altura, maior_altura, media_altura_fem, qnt_masc);
            
    return 0;
}