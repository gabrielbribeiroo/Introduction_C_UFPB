/*
Em um frigorífico existem N bois. 
Cada boi traz preso no seu pescoço um cartão, contendo um número de identificação e seu peso. 
Fazer um programa que escreva o número e o peso do boi mais gordo e do boi mais magro.
*/

#include <stdio.h>

int main() {
    int id, id_magro, id_gordo;
    float peso, peso_magro=1500, peso_gordo=0;

    printf("Digite a identificacao do boi [0 p/ FINALIZAR]: \n");
    scanf ("%d", &id); // Lê a identificação 

    while (id !=0) {
        printf("Digite o peso do boi [em quilogramas (kg)]: \n");
        scanf ("%f", &peso); // Lê o peso
        
        // Atualiza o menor peso
        if (peso < peso_magro) {
            peso_magro = peso; 
            id_magro = id; 
        }

        // Atualiza o maior peso
        if (peso > peso_gordo) {
            peso_gordo = peso;
            id_gordo = id;
        }
        printf("Digite a identificacao do boi [0 P/ FINALIZAR]: \n");
        scanf ("%d", &id);
    }

    printf("Menor peso = %.2f kg. \n"
        "Identificador do boi mais magro = %d \n"
        "Maior peso = %.2f kg. \n"
        "Identificador do boi mais gordo = %d \n", peso_magro, id_magro, peso_gordo, id_gordo);

    return 0;
}