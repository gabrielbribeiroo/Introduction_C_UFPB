 /*
  Faça um programa que calcule e mostre o valor de S
 */

#include <stdio.h>

int main() {
    float numerador=1, denominador=1, soma=0;
    while ((numerador <= 99) && (denominador <= 50)) {
        soma = soma + (numerador/denominador);
        numerador = numerador + 2;
        denominador = denominador + 1;
    }

    printf("Valor de S = %.2f\n", soma);
    
    return 0;
}