/*
Seja a declaração: int N[LINHA][COLUNA]; 
Escrever um programa capaz de:
a) ler os elementos da matriz;
b) identificar o número de elementos iguais a zero em cada uma das linhas;
c) identificar o número de elementos iguais a zero em cada uma das colunas;
d) identificar o número de elementos pares em determinada linha (a linha será fornecida pelo usuário);
e) identificar o número de elementos pares em determinada coluna (a coluna será fornecida pelo usuário);
f) calcular a média aritmética dos elementos de cada uma das linhas, armazenando esses valores em um vetor;
g) identificar a linha que tem a maior média de seus elementos;
h) mostrar todos os resultados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeraMatriz(int **m, int L, int C) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            m[i][j] = rand() % 50; // Gera elementos aleatórios até 50
        }
    }
}

void MostraMatriz(int **m, int L, int C) {
    int i, j;

    printf("MATRIZ:\n");

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            printf("%4d ", m[i][j]); // Mostra os elementos da matriz com 4 espaços
        }
        printf("\n");
    }
}

void ContaZeros(int **m, int L, int C, int *zero_lin, int *zero_col) {
    int i, j;

    for (i=0; i<L; i++) {
        for (j=0; j<C; j++) {
            if (m[i][j] == 0) {
                zero_lin[i]++; // Conta a quantidade de zeros em cada linha
                zero_col[j]++; // Conta a quantidade de zeros em cada coluna
            }
        }
    }
}

void ContaPares(int **m, int L, int C, int lin_esc, int col_esc, int *par_lin, int *par_col) {
    int i, j;

    for (j=0; j<C; j++) {
        if (m[lin_esc][j] % 2 == 0) {
            par_lin++; // Conta a quantidade de pares em uma determinada linha
        }
    }

    for (i=0; i<L; i++) {
        if (m[i][col_esc] % 2 == 0) {
            par_col++; // Conta a quantidade de pares em uma determinada coluna
        }
    }
}

void CalculaMedia(int **m, int L, int C, float *med_lin) {
    int i, j;

    for (i=0; i<L; i++) {
        int soma = 0;

        for (j=0; j<C; j++) {
            soma += m[i][j]; // Soma os elementos
        }

        med_lin[i] = (float) soma / C; // Calcula a média dos elementos de cada linha
    }
}

int LinhaMaiorMedia(float *med_lin, int L) {
    int i, linha_maior_media = 0;
    float maior_media = med_lin[0];

    for (i=1; i<L; i++) {
        if (med_lin[i] > maior_media) {
            maior_media = med_lin[i]; // Atualiza o valor da maior média
            linha_maior_media = i; // Atualiza a posição da maior média
        }
    }

    return linha_maior_media;
}

int main() {
    int linhas, colunas;

    // Lê a quantidade de linhas e colunas da matriz
    printf("Digite o numero de linhas da matriz:\n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz:\n");
    scanf("%d", &colunas);

    // Libera as memórias alocadas
    int **N = (int **)malloc(linhas * sizeof(int *));

    for (int i=0; i<linhas; i++) {
        N[i] = (int *)malloc(colunas * sizeof(int));
    }

    int *qnt_zeros_linha = (int *)calloc(linhas, sizeof(int));
    int *qnt_zeros_coluna = (int *)calloc(colunas, sizeof(int));
    int *qnt_pares_linha = (int *)calloc(linhas, sizeof(int));
    int *qnt_pares_coluna = (int *)calloc(colunas, sizeof(int));
    float *media_linha = (float *)calloc(linhas, sizeof(float));

    // Chamada de funções
    GeraMatriz(N, linhas, colunas);
    MostraMatriz(N, linhas, colunas);
    ContaZeros(N, linhas, colunas, qnt_zeros_linha, qnt_zeros_coluna);

    printf("\nQuantidade de zeros por linha:\n");
    for (int i=0; i<linhas; i++) {
        printf("Linha %d: %d zeros.\n", i+1, qnt_zeros_linha[i]);
    }
    printf("\nQuantidade de zeros por coluna:\n");
    for (int j=0; j<colunas; j++) {
        printf("Coluna %d: %d zeros.\n", j+1, qnt_zeros_coluna[j]);
    }

    int linha_escolhida, coluna_escolhida;
    printf("\nDigite o numero da linha para contar os pares:\n");
    scanf("%d", &linha_escolhida);
    linha_escolhida--;
    ContaPares(N, linhas, colunas, linha_escolhida, coluna_escolhida, qnt_pares_linha, qnt_pares_coluna);
    printf("Quantidade de pares na linha escolhida: %d\n", qnt_pares_linha[linha_escolhida]);

    printf("\nDigite o numero da coluna para contar os pares:\n");
    scanf("%d", &coluna_escolhida);
    coluna_escolhida--;
    ContaPares(N, linhas, colunas, linha_escolhida, coluna_escolhida, qnt_pares_linha, qnt_pares_coluna);
    printf("Quantidade de pares na coluna escolhida: %d\n", qnt_pares_coluna[coluna_escolhida]);

    CalculaMedia(N, linhas, colunas, media_linha);
    printf("\nMedia por linha:\n");
    for (int i=0; i<linhas; i++) {
        printf("Linha %d: %.2f\n", i+1, media_linha[i]);
    }

    int linha_maior_media = LinhaMaiorMedia(media_linha, linhas);
    printf("Linha com a maior media de elementos: %d\n", linha_maior_media);

    for (int i = 0; i < linhas; i++) {
        free(N[i]);
    }

    // Libera a memória
    free(N);
    free(qnt_zeros_linha);
    free(qnt_zeros_coluna);
    free(qnt_pares_linha);
    free(qnt_pares_coluna);
    free(media_linha);

    return 0;
}