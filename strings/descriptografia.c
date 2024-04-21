/*
Fazer um segundo programa, complementar ao anterior, que deve ser capaz de descriptografar a string.
Ou seja, deve pegar uma string codificada e retornar ao texto original. 
Por exemplo:
Entre com o texto a ser descriptografado: MjohvbhfnD
Texto descriptografado: LinguagemC
Dica: Subtrair um do código de um caracter implica em transformá-lo no caracter anterior.
Exemplo: Letra = ‘A’; Letra = Letra – 1.
*/

#include <stdio.h>
#include <string.h>

#define TAM 101
#define DESLOCAMENTO -1

void LerString(char *texto) {
    printf("Digite um texto criptografado [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(texto, TAM, stdin);
    texto[strcspn(texto, "\n")] = '\0';
}

void DescriptografarString(char *texto) {
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

void MostrarStringDescriptografada(char *texto) {
    printf("Texto descriptografado: %s\n", texto);
}


int main() {
    char texto[TAM];

    LerString(texto);
    DescriptografarString(texto);
    MostrarStringDescriptografada(texto);

    return 0;
}