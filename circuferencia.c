#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main () {

    float raio, area;
    printf("Digite o raio da circuferencia: \n");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);
    printf("Area do circulo: %.2f\n", area);

    return 0;
}