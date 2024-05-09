/*
Calcular e mostrar os números divisíveis por 4 menores que 100.
*/

#include <stdio.h>

int main() {

    for (int i=0; i<100; i++) {
        if (i % 4 == 0) {
            printf("%d ", i); // Mostra os valores divisíveis por 4
        }
    }
    printf("\n");
    return 0;
}