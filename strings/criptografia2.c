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

#define TAM 101
#define DESLOCAMENTO 1

void LerString(char *texto) {
    printf("Digite um texto a ser codificado [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(texto, TAM, stdin);
    texto[strcspn(texto, "\n")] = '\0';
}

void CriptografarString(char *texto) {
    int i;

    for (i=0; texto[i] != '\0'; i++) {
        if ((texto[i] >= 'A') && (texto[i] <= 'Z')) {
            texto[i] = ((texto[i] - 'A') + DESLOCAMENTO) % 26 + 'A';
        }
        else {
            if ((texto[i] >= 'a') && (texto[i] <= 'z')) {
                texto[i] = ((texto[i] - 'a') + DESLOCAMENTO) % 26 + 'a';
            }
        }       
    }
}

void MostrarStringCriptografada(char *texto) {
    printf("Texto criptografado: %s\n", texto);
}


int main() {
    char texto[TAM];

    LerString(texto);
    CriptografarString(texto);
    MostrarStringCriptografada(texto);

    return 0;
}