/*
Fazer um programa para ler uma string e um caracter qualquer. 
Construir um vetor (OC) contendo as posições (índices) de onde ocorre o caracter na string.
Exemplo: Seja a string "abracadabra!!!" e o caracter 'a', então o vetor de índices OC deverá conter os seguintes valores: { 0 3 5 7 10 -1}. 
O valor -1 indica final de vetor, ou seja, que não existem mais ocorrências. 
Caso, não exista nenhuma ocorrência, deve ser armazenado o valor -1 no vetor. 
*/

#include <stdio.h>
#include <string.h>

#define TAM 100

void EncontrarOcorrencias(const char *str, char c, int *ocorrencias) {
    int i, j = 0, t = strlen(str);

    for (i=0; i<t; i++) {
        if (str[i] == c) {
            ocorrencias[j++] = i;
        }
    }

    ocorrencias[j] = -1;
}

void MostrarVetorOC(const char *str, char c, int *ocorrencias) {
    printf("Vetor de ocorrencias do caractere %c na string %s: \n{", c, str);
    for (int i=0; ocorrencias[i] != -1; i++) {
        printf("%d ", ocorrencias[i]);
    }
    printf("-1}\n");
}

int main() {
    char frase[TAM], letra;
    int ocorrencias[TAM];

    printf("Digite uma frase: [MAXIMO DE %d CARACTERES]\n", TAM);
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; 

    printf("Digite um caractere:\n");
    letra = getchar();
    
    EncontrarOcorrencias(frase, letra, ocorrencias);
    MostrarVetorOC(frase, letra, ocorrencias);
    return 0;
}