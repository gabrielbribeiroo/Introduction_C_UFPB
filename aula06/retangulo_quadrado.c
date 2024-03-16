/*
Escreva uma função chamada medidasDoRetangulo que recebeos parâmetros b e h 
(as medidas em centímetros dos dois lados de um retângulo) e retorne:
    - 1 se for um quadrado
    - 0 se não for um quadrado
 Mostre os resultados na função main().
*/

#include <stdio.h>

int MedidasDoRetangulo(int b, int h) {
    if (b == h) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    float base, altura;

    printf("Digite a base do retangulo: \n");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: \n");
    scanf("%f", &altura);

    if (MedidasDoRetangulo(base, altura) == 1) {
        printf("Eh um quadrado. \n");
    }
    else {
        printf("Nao eh um quadrado. \n");
    }

    return 0;
}