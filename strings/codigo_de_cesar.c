/*
O código de César é uma das mais simples e conhecidas técnicas de criptografia. 
É um tipo de substituição, na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. 
Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. 
Implemente um programa que faça uso do Código de César (3 posições), entre com uma string e retorne a string codificada. 
Por exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/

#include <stdio.h>
#include <string.h>

#define TAM 100 // Define uma constante TAM de valor 100 que representa o tamanho da string
#define DESLOCAMENTO 3 // Define uma constante DESLOCAMENTO de valor 3 que representa quantas letras vão a frente na ASCII para criptografar

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin); // Leitura da string
    frase[strcspn(frase, "\n")] = '\0'; // Remove o \n, substituindo-o pelo \0, encerrando a string
}

void CodigoDeCesar(char *frase) {
    int i;

    for (i=0; frase[i] != '\0'; i++) {
        // Verifica se o caractere é maiúsculo ou minúsculo
        if ((frase[i] >= 'A') && (frase[i] <= 'Z')) {
            frase[i] = ((frase[i] - 'A') + DESLOCAMENTO) % 26 + 'A'; // Incrementa 3 letras a frente 
        }
        else {
            if ((frase[i] >= 'a') && (frase[i] <= 'z')) {
                frase[i] = ((frase[i] - 'a') + DESLOCAMENTO) % 26 + 'a'; // Incrementa 3 letras a frente
            }
        }       
    }
}

void MostrarFraseCodificada(char *frase) {
    printf("Frase codificada: %s\n", frase); // Mostra a frase codificada
}


int main() {
    char frase[TAM];

    // Chamada das funções
    LerFrase(frase);
    CodigoDeCesar(frase);
    MostrarFraseCodificada(frase);

    return 0;
}