/*
Faça uma função que recebe a altura e o sexo de uma pessoa por parâmetro e retorna o seu peso ideal. 
Calcule o peso ideal usando a fórmula: 
    peso = 72.7 * altura - 58 (para homens);
    peso = 62.1 * altura - 44.7 (para mulheres).
*/

#include <stdio.h>

float CalculaPesoIdeal (char sexo, float altura) {
    float peso_ideal;
    if (sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
    }
    else {
        peso_ideal = (62.1 * altura) - 44.7;
    }

    return peso_ideal;
}

int main() {
    float altura;
    char sexo;

    printf("Digite a altura: \n");
    scanf("%f", &altura);
    
    if (altura > 0) {
        printf("Digite o sexo [M / F]: \n");
        scanf(" %c", &sexo);
        if ((sexo == 'M') || (sexo == 'F')) {
            printf("Peso ideal: %.2f \n", CalculaPesoIdeal(sexo, altura));
        }
        else {
            printf("Sexo invalido. Tente novamente!\n");
        }
    }

    else {
        printf("Altura invalida. Tente novamente!\n");
    }

    return 0;
}