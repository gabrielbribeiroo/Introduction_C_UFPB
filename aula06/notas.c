/*
Elabore um programa contendo uma função que receba as três notas de um aluno como parâmetro e uma letra. 
    - Se a letra for A, calcular a média aritmética das notas do aluno; 
    - Se a letra for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. 
A média calculada deverá ser devolvida ao programa principal para, então, ser mostrada.
*/

#include <stdio.h>

float CalculaMedia(float n1, float n2, float n3, char tipo, float *m) {
    if (tipo == 'A') {
        *m = (n1 + n2 + n3) / 3;
    }
    else {
        *m = ((n1*5) + (n2*3) + (n3*2)) / 10;
    }
    return *m;
}

int main() {
    float nota1, nota2, nota3, media;
    char tipo_media;

    printf("-------- CALCULADORA DE MEDIA --------\n");
    printf("Digite o tipo de media que deseja calcular: \n"
           "[A] MEDIA ARITMETICA\n"
           "[P] MEDIA PONDERADA\n");
    scanf(" %c", &tipo_media);

    printf("\nDigite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    if ((tipo_media == 'A') || (tipo_media == 'P')) {
        printf("\nMedia do aluno = %.2f\n", CalculaMedia(nota1, nota2, nota3, tipo_media, &media));
    }
    else {
        printf("OPCAO INVALIDA. Tente novamente!\n");
    }

    return 0;
}