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

#define TAM 100
#define DESLOCAMENTO 3

void LerFrase(char *frase) {
    printf("Digite uma frase [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(frase, TAM, stdin);
    frase[strcspn(frase, "\n")] = '\0';
}

void CodigoDeCesar(char *frase) {
    int i;

    for (i=0; frase[i] != '\0'; i++) {
        if ((frase[i] >= 'A') && (frase[i] <= 'Z')) {
            frase[i] = ((frase[i] - 'A') + DESLOCAMENTO) % 26 + 'A';
        }
        else {
            if ((frase[i] >= 'a') && (frase[i] <= 'z')) {
                frase[i] = ((frase[i] - 'a') + DESLOCAMENTO) % 26 + 'a';
            }
        }       
    }
}

void MostrarFraseCodificada(char *frase) {
    printf("Frase codificada: %s\n", frase);
}


int main() {
    char frase[TAM];

    LerFrase(frase);
    CodigoDeCesar(frase);
    MostrarFraseCodificada(frase);

    return 0;
}