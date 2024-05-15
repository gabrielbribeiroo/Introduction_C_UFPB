/*
Faça um programa que receba como entrada os coeficientes (a, b, c) de uma equação do 2º grau.
Calcule e mostre as raízes desta equação. 
As raízes de uma equação do 2º grau são calculadas pela fórmula: (x = (-b + sqrt(delta)) / 2a), onde delta é o discriminante da equação.
Para esse discriminante, há três possíveis situações:
    a) Se D < 0 – não há solução real, pois não existe raiz quadrada de número negativo;
    b) Se D = 0 – há duas soluções iguais;
    c) Se D > 0 – há duas soluções reais e diferentes: x1 e x2.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, delta;

    printf("Digite os valores dos tres coeficientes da equacao: \n");
    scanf("%f %f %f", &a, &b, &c); // Lê os coeficientes da equação

    delta = pow(b,2) - 4*a*c; // Calcula o delta

    // Verificação do valor do delta e das raízes
    if (delta < 0){ 
        printf("Nao tem solucao real. \n");
    } 
    else {
        if (delta == 0){
            x1 = (-b) / (2*a);
            printf("Tem solucao igual a %.2f \n", x1);
        }
        else {
            // Cálcula das raízes 
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Tem duas solucoes reais e diferentes. \n");
            printf("X1 = %.2f", x1);
            printf("X2 = %.2f", x2);
        }
    }
    return 0;
}