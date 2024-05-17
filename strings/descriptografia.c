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

#define TAM 101 // Define uma constante TAM de valor 101 que representa o tamanho da string
#define DESLOCAMENTO -1 // Define uma constante DESLOCAMENTO de valor -1 que representa quantas letras vão retroceder na ASCII para criptografar

void LerString(char *texto) {
    printf("Digite um texto criptografado [MAXIMO DE %d caracteres]:\n", TAM-1);
    fgets(texto, TAM, stdin); // Leitura da string
    texto[strcspn(texto, "\n")] = '\0'; // Remove o \n, substituindo-o pelo \0, encerrando a string
}

void DescriptografarString(char *texto) {
    int i;

    for (i=0; texto[i] != '\0'; i++) {
        // Verifica se o caractere é maiúsculo ou minúsculo
        if ((texto[i] >= 'A') && (texto[i] <= 'Z')) {
            texto[i] = ((texto[i] - 'A') + DESLOCAMENTO) % 26 + 'A'; // Retrocede 1 letra
        }
        else {
            if ((texto[i] >= 'a') && (texto[i] <= 'z')) {
                texto[i] = ((texto[i] - 'a') + DESLOCAMENTO) % 26 + 'a'; // Retrocede 1 letra
            }
        }       
    }
}

void MostrarStringDescriptografada(char *texto) {
    printf("Texto descriptografado: %s\n", texto); // Mostra o texto criptografado
}


int main() {
    char texto[TAM];

    // Chamada das funções
    LerString(texto);
    DescriptografarString(texto);
    MostrarStringDescriptografada(texto);

    return 0;
}