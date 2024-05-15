/*
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. 
Escreva também uma função para mostrar a sequência no formato apresentado abaixo.
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (N²+1)/(N+3)
*/

#include <stdio.h>
#include <math.h>

void MostraSequencia(int n) {
    printf("Sequencia: ");
    
    for (int i=1; i<=n; i++) {
        printf("%.f/%d", pow(i,2)+1, i+3); // Mostra a sequência
        if (i < n) {
            printf(" + ");
        }
    }
}

float CalculaSequencia(int n) {
    float s = 0; // Inicializa a soma com 0

    for (int i=1; i<=n; i++) {
        s = s + ((pow(i,2) + 1) / ((i+3))); // Calcula o valor da soma dos valores da sequência
    }

    return s;
}

int main() {
    int num;

    do {
        printf("Digite um valor [MAIOR QUE 0]: \n");
        scanf("%d", &num); // Lê um número
    }while(num <= 0); // Enquanto ele for menor ou igual a 0

    MostraSequencia(num); // Chamada de função

    printf("\n\nSoma = %.3f", CalculaSequencia(num)); // Mostra o valor da soma

    return 0;
}
