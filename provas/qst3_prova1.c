#include <stdio.h>

int main() {
    int atual, anterior, qnt_num = 1, soma;

    printf("Digite um numero: ");
    scanf("%d", &atual);
    soma = atual;

    do {
        anterior = atual;
        printf("Digite um numero: ");
        scanf("%d", &atual);
        soma += atual;
        qnt_num++;
    }while ((atual != anterior*2) && (atual != anterior/2));

    printf("Soma dos numeros = %d\n", soma);
    printf("Quantidade de numeros = %d\n", qnt_num);
    printf("Numeros que finalizaram o programa = %d %d\n", anterior, atual);
    
    return 0;
}