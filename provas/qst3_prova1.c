#include <stdio.h>

int main() {
    int atual, anterior, qnt_num = 1, soma;

    printf("Digite um numero: ");
    scanf("%d", &atual); // Lê um número
    soma = atual; // Inicializa a soma dos números

    do {
        anterior = atual; 
        printf("Digite um numero: ");
        scanf("%d", &atual); // Atualiza o valor do número
        soma += atual; // Soma os números
        qnt_num++; // Conta a quantidade de números
    }while ((atual != anterior*2) && (atual != anterior/2)); // Enquanto o atual for diferente da metade e do dobro do anterior

    // Mostra as informações
    printf("Soma dos numeros = %d\n", soma);
    printf("Quantidade de numeros = %d\n", qnt_num);
    printf("Numeros que finalizaram o programa = %d %d\n", anterior, atual);
    
    return 0;
}