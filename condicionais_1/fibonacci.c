/*
A sequência de Fibonacci tem papel importante na explicação de fenômenos naturais. 
Ela é também bastante utilizada para fins estéticos, pela sua reconhecida harmonia.
Exemplo disso foi sua utilização na construção do Partenon, em Atenas. 
A sequência dá-se inicialmente por dois números 1. 
A partir do terceiro elemento, usa-se a expressão:
    elementon = elementon-1 + elementon-2
Exemplo de sequência: 1, 1, 2, 3, 5, 8. 
Escreva um programa que mostra na tela os n primeiros elementos da sequência de Fibonacci, onde n é informado pelo usuário.
*/

#include <stdio.h>

void Fibonacci (int numero){
    int antepenultimo = 1, penultimo = 1, atual; // Sequência começando com os valores 1 e 1

    printf("Sequência de Fibonacci com %d elementos: \n", numero);
    printf("%d %d ", antepenultimo, penultimo);

    for (int posicao = 3; posicao <= numero; posicao++) {
        atual = antepenultimo + penultimo; // O número sempre será a soma dos dois anteriores
        printf("%d ", atual);
        antepenultimo = penultimo; // Atualiza o valor de antepenúltimo
        penultimo = atual; // Atualiza o valor de penúltimo
    }
}

int main() {
    int numero;

    printf("Ate qual termo da sequência de Fibonacci voce quer? \n");
    scanf("%d", &numero); // Lê a quantidade de termos da sequência a ser lida

    // Chamada de função
    Fibonacci(numero); 

    return 0;
}