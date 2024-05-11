/*
Faça uma função que recebe a altura e o sexo de uma pessoa por parâmetro e retorna o seu peso ideal. 
Calcule o peso ideal usando a fórmula: 
    peso = 72.7 * altura - 58 (para homens);
    peso = 62.1 * altura - 44.7 (para mulheres).
*/

#include <stdio.h>

float CalculaPesoIdeal (char sexo, float altura) {
    float peso_ideal;
    // Verifica o sexo digitado para calcular o peso ideal
    if (sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
    }
    else {
        peso_ideal = (62.1 * altura) - 44.7;
    }

    return peso_ideal; // Retorna o peso ideal
}

int main() {
    float altura;
    char sexo;

    printf("Digite a altura: \n");
    scanf("%f", &altura); // Lê a altura
    
    // Verifica a condição de altura ser positiva
    if (altura > 0) {
        printf("Digite o sexo [M / F]: \n");
        scanf(" %c", &sexo); // Lê o sexo
        if ((sexo == 'M') || (sexo == 'F')) { // Verifica se o usuário digitou os caracteres válidos
            printf("Peso ideal: %.2f \n", CalculaPesoIdeal(sexo, altura)); // Mostra o peso ideal
        }
        else {
            printf("Sexo invalido. Tente novamente!\n"); // Caracteres inválidos
        }
    }

    else {
        printf("Altura invalida. Tente novamente!\n");
    }

    return 0;
}