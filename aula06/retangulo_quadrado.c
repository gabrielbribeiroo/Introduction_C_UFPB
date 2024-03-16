/*
Altere a função anterior para que além de devolver os parâmetros A e P, respectivamente a área e o perímetro deste retângulo
Retorne 1 caso o retângulo seja um quadrado, ou 0, caso contrário.
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