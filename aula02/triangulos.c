/*
Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo.
Se for, verificar se é um triângulo equilátero, isósceles ou escaleno. 
Se eles não formarem um triângulo, escrever a mensagem “Os valores não formam um triângulo”. 
Propriedades e definições:
     Propriedade – o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.
     Definição 1 – chama-se triângulo equilátero o triângulo que tem os comprimentos dos três lados iguais.
     Definição 2 – chama-se triângulo isósceles o triângulo que tem os comprimentos de dois lados iguais. 
Portanto, todo triângulo equilátero é também isósceles.
     Definição 3 – chama-se triângulo escaleno o triângulo que tem os comprimentos de seus três lados diferentes.
*/

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