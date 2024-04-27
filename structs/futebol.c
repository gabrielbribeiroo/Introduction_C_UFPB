/*
Criar uma estrutura para receber os nomes de clubes de futebol e seus respectivos pontos no campeonato. 
Ler os nomes e os pontos e mostrar qual equipe (nome e pontos) é a vencedora. 
Considerar 10 clubes no total.
*/

#include <stdio.h>

#define MAX 10

typedef struct {
    char nome[50];
    int pontos;
}equipe;

void LerEquipe(equipe c[]) {
    printf("CADASTRO DAS EQUIPES\n");

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
        if (c[i].pontos > maior) {
        maior = c[i].pontos;
        index_maior = i;
        }
    }

    return index_maior;
}

int main() {
    equipe c[MAX];
    int maior;

    LerEquipe(c);
    maior = EquipeVencedora(c);
    printf("Equipe vencedora = %s, "
            "Pontos = %d\n", c[maior].nome, c[maior].pontos);

    return 0;  
}