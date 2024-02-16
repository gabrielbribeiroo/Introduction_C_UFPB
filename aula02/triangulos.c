#include <stdio.h>

int main() {
    float x, y, z;
    printf("Digite tres valores: \n");
    scanf("%f %f %f", &x, &y, &z);
    if (x+y>z && x+z>y && y+z>x) {
        if (x==y && x==z){
            printf("Eh um triangulo equilatero. \n");
        }
        else {
            if (x==y || y==z || x==z) {
                printf("Eh um triangulo isosceles. \n");
            }
            else {
                printf("Eh um triangulo escaleno. \n");
            }
        }
    }
    else {
        printf("As medidas nao formam um triangulo! \n");
    }
    return 0;
}