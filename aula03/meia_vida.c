/*
Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, 
fazer um programa que determine o tempo necessário para que essa massa se torne menor do que 0.5 gramas. 
Escrever a massa inicial, a massa final e o tempo calculado em segundos.
*/
#include <stdio.h>

int main() {
    int tempo=0;
    float massa_inicial, massa_final;
    printf("Digite a massa inicial [em gramas]: \n");
    scanf("%f", &massa_inicial);
    massa_final = massa_inicial;

    while (!(massa_final < 0.5)) {
        massa_final = massa_final / 2;
        tempo = tempo + 50;
    }
    
    printf("Massa inicial = %.2f gramas. \n"
           "Massa final = %.2f gramas. \n"
           "Tempo calculado = %d segundos. \n", massa_inicial, massa_final, tempo);
           
    return 0;
}