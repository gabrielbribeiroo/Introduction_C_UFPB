/*
Fazer um programa de “criptografia” (codificação de dados visando a privacidade de acesso as informações), onde dada uma string (vetor de caracteres), 
Este programa codifique os dados, através de um processo de substituição de letras. 
Você pode definir o seu próprio método de criptografia, desde que depois seja possível reverter este processo, ou seja, um código criptografado deve poder ser convertido novamente ao valor inicial.
Por exemplo:
Entre com o texto (string) a ser criptografado: LinguagemC
Texto criptografado: MjohvbhfnD
Dica: Caracteres também permitem operações numéricas como: Letra = Letra + 1; 
Somar um ao código de uma letra, implica em transformá-la no caracter seguinte.
*/
#include <stdio.h>
#include <string.h>

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string
#define DESLOCAMENTO 1 // Define uma constante DESLOCAMENTO de valor 1 que representa quantas letras vão a frente na ASCII para criptografar

void LerString(char *texto) {
    printf("Digite um texto a ser codificado [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(texto, TAM, stdin); // Leitura da string
    texto[strcspn(texto, "\n")] = '\0'; // Remove o \n, substituindo-o pelo \0, encerrando a string
}

void CriptografarString(char *texto) {
    int i;

    for (i=0; texto[i] != '\0'; i++) {
        // Verifica se o caractere é maiúsculo ou minúsculo
        if ((texto[i] >= 'A') && (texto[i] <= 'Z')) {
            texto[i] = ((texto[i] - 'A') + DESLOCAMENTO) % 26 + 'A'; // Incrementa 1 letra a frente
        }
        else {
            if ((texto[i] >= 'a') && (texto[i] <= 'z')) {
                texto[i] = ((texto[i] - 'a') + DESLOCAMENTO) % 26 + 'a'; // Incrementa 1 letra a frente
            }
        }       
    }
}

void MostrarStringCriptografada(char *texto) {
    printf("Texto criptografado: %s\n", texto); // Mostra texto criptografado
}


int main() {
    char texto[TAM];

    // Chamada das funções
    LerString(texto);
    CriptografarString(texto);
    MostrarStringCriptografada(texto);

    return 0;
}