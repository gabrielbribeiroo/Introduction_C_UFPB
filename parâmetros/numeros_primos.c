/*
Fazer um programa para calcular e mostrar a soma dos números primos entre dois inteiros N e K positivos,
informados pelo usuário no início da execução do programa.
Escrever duas funções, uma que determina se um número é primo e a outra que calcula a soma dos primos. 
*/

#include <stdio.h>

int EhPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
} 

int SomaPrimos(int N, int K, int *s) {
    *s = 0;
    for (int i=N; i<=K; i++) {
        if (EhPrimo(i)) {
            *s += i;
        }
    }
    return *s;
}

int main() {
    int N, K, resultado;

    printf("----- CALCULADORA DE PRIMOS -----\n");
    printf("Digite o valor de N:\n");
    scanf("%d", &N);
    printf("Digite o valor de K:\n");
    scanf("%d", &K);

    if ((N <= 0) || (K <= 0)) {
        printf("Os valores de N e K devem ser positivos. Tente novamente!\n");
        return 1;
    }
    
    printf("A soma dos numeros primos entre %d e %d eh: %d\n", N, K, SomaPrimos(N, K, &resultado));

    return 0;
}