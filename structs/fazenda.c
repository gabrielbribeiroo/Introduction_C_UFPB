/*
Escreva um programa que auxilie no controle de uma fazenda que possui um total de 200 cabeças de gado. 
A base de dados é formada por um conjunto de estruturas contendo os seguintes campos referente a cada cabeça de gado:
    - código da cabeça de gado;
    - número de litros de leite produzido por semana; 
    - quantidade de alimento ingerida por semana (em quilos);
    - data de nascimento;
    - abate (‘N’ (não) ou ‘S’ (sim)).

• Ler a base de dados armazenando em um vetor de estruturas.
• Preencher o campo abate, considerando que a cabeça de gado irá para o abate, caso:
    - tenha mais de 5 anos, ou 
    - produza menos de 40 litros de leite por semana, ou
    - produza entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de alimento por dia.

Crie o menu de opções para:
c) Calcular e mostrar a quantidade total de leite produzida por semana;
d) Calcular e mostrar a quantidade total de alimento consumido por semana;
e) Calcular e mostrar a quantidade total de leite a ser produzida por semana, após o abate;
f) Calcular e mostrar o total de alimento consumido por semana após o abate;
g) Calcular e mostrar a quantidade de cabeças de gado que irão para o abate.
h) Sair do programa.
*/

#include <stdio.h>

#define MAX 200 // Define uma constante MAX de valor 200 que representa a quantidade de gados lidos

typedef struct {
    int codigo, idade;
    float leite, alimento;
    char abate;
}gado; // Declaração de estrutura gado

void LerGado(gado g[]) {
    printf("Digite os dados de cada cabeca de gado.\n");

    // Lê as informações dos gados
    for (int i=0; i<MAX; i++) {
        printf("\nCabeca de Gado %d:\n", i+1);
        printf("Codigo: ");
        scanf("%d", &g[i].codigo);
        printf("Litros de leite por semana: ");
        scanf("%f", &g[i].leite);
        printf("Quantidade de alimento ingerido por semana [em kg]: ");
        scanf("%f", &g[i].alimento);
        printf("Idade [em anos]: ");
        scanf("%d", &g[i].idade);
        printf("Abate [S/N]: ");
        scanf(" %c", &g[i].abate);
    }
}

void CalcularTotais(gado g[], char opcao) {
    float tot_leite = 0, tot_alimento = 0, leite_pos_abate = 0, alimento_pos_abate = 0;
    int gado_abate = 0;

    for (int i=0; i<MAX; i++) {
        tot_leite += g[i].leite;
        tot_alimento += g[i].alimento;
        if ((g[i].idade > 5) || (g[i].leite < 40) || (g[i].leite>=50 && g[i].leite<=70 && g[i].alimento>50)) {
            g[i].abate = 'S';
            gado_abate++; // Calcula o total que vai para o abate
        }
        if (g[i].abate == 'N') {
            leite_pos_abate += g[i].leite; // Soma a quantidade de leite após o abate
            alimento_pos_abate += g[i].alimento; // Soma a quantidade de alimento após o abate
        }
    }

    // Mostra a informação, de acordo com a opção escolhida
    switch (opcao) {
    case 'c':
        printf("\nQuantidade total de leite produzida por semana: %.2f litros.\n", tot_leite);
        break;
    case 'd': 
        printf("\nQuantidade total de alimento consumido por semana: %.2f kg.\n", tot_alimento);
        break;
    case 'e': 
        printf("\nQuantidade total de leite a ser produzida por semana, apos o abate: %.2f litros.\n", leite_pos_abate);
        break;
    case 'f':
        printf("\nQuantidade total de alimento consumido por semana apos o abate: %.2f kg.\n", alimento_pos_abate);
        break;
    case 'g':
        printf("\nQuantidade de cabecas de gado que irao para o abate: %d\n", gado_abate);
        break;    
    default:
        printf("OPCAO INVALIDA! Tente novamente.\n");
    }
}

int main() {
    gado g[MAX]; // Array g do tipo gado (struct)
    char opcao;

    LerGado(g); // Chamada de função

    do {
        printf("\nMENU DE OPCOES\n");
        printf("c) Calcular e mostrar a quantidade total de leite produzida por semana\n");
        printf("d) Calcular e mostrar a quantidade total de alimento consumido por semana\n");
        printf("e) Calcular e mostrar a quantidade total de leite a ser produzida por semana, apos o abate\n");
        printf("f) Calcular e mostrar o total de alimento consumido por semana apos o abate\n");
        printf("g) Calcular e mostrar a quantidade de cabecas de gado que irao para o abate\n");
        printf("h) Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao); // Lê a opção

        if (opcao != 'h') {
            CalcularTotais(g, opcao); // Chamada de função
        }
    } while (opcao != 'h'); // Enquanto a opção for diferente de h

    return 0;
}