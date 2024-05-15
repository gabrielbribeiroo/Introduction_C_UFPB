/*
Criar uma estrutura para receber os nomes de clubes de futebol e seus respectivos pontos no campeonato. 
Ler os nomes e os pontos e mostrar qual equipe (nome e pontos) é a vencedora. 
Considerar 10 clubes no total.
*/

#include <stdio.h>

#define MAX 10 // Define uma constante MAX de valor 10 que representa a quantidade de equipes lidas

typedef struct {
    char nome[50];
    int pontos;
}equipe; // Declaração de estrutura equipe

void LerEquipe(equipe c[]) {
    printf("CADASTRO DAS EQUIPES\n");

    // Lê as informações das equipes
    for (int i=0; i<MAX; i++) {
        printf("\nNome da equipe: ");
        fgets(c[i].nome, 50, stdin);
        printf("Pontos da equipe: ");
        scanf("%d%*c", &c[i].pontos);    
    } 
}

int EquipeVencedora(equipe c[]) {
    int i, index_maior, maior = 0;

    for (i=0; i<MAX; i++){
        // Verifica a maior pontuação
        if (c[i].pontos > maior) {
            maior = c[i].pontos;
            index_maior = i;
        }
    }

    return index_maior; // Retorna a posição da equipe vencedora
}

int main() {
    equipe c[MAX]; // Array c do tipo equipe (struct)
    int maior;

    // Chamada de funções
    LerEquipe(c);
    maior = EquipeVencedora(c);
    printf("Equipe vencedora = %s, "
            "Pontos = %d\n", c[maior].nome, c[maior].pontos); // Mostra a equipe vencedora

    return 0;  
}