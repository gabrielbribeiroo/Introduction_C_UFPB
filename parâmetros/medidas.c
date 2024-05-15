/*
Sabendo que 1 pé tem 30,48 cm e que 1 polegada tem 2,54 cm.
Escreva uma função que converta um valor de altura, dado em pés e polegadas, para o valor correspondente em metros. 
A função deve receber como parâmetros os valores em pés e polegadas (inteiros) e retornar a altura equivalente em metros. 
Por exemplo, se forem fornecidos os valores 5 pés e 10 polegadas, a função deve retornar o valor 1,778 (metros).
    - double metros(int pes, int polegadas); 
*/

#include <stdio.h>

double metros(int pes, int polegadas, double *m) {
    *m = (pes * 0.3048) + (polegadas * 0.0254); // Conversão do valor para metros
    return *m;
}

int main() {
    int altura_pes, altura_polegadas;
    double altura_metros;

    printf("Digite a altura em pes:\n");
    scanf("%d", &altura_pes);
    printf("Digite a altura em polegadas:\n");
    scanf("%d", &altura_polegadas);

    printf("Altura [em metros(m)]: %.3f\n", metros(altura_pes, altura_polegadas, &altura_metros)); // Chamada da função

    return 0;
}