#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, delta;
    printf("Digite os valores dos tres coeficientes da equacao: \n");
    scanf("%f %f %f", &a, &b, &c);
    delta = pow(b,2) - 4*a*c;
    if (delta < 0){
        printf("Nao tem solucao real. \n");
    } 
    else {
        if (delta == 0){
            x1 = (-b) / (2*a);
            printf("Tem solucao igual a %.2f \n", x1);
        }
        else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Tem duas solucoes reais e diferentes. \n");
            printf("X1 = %.2f", x1);
            printf("X2 = %.2f", x2);
        }
    }
    return 0;
}