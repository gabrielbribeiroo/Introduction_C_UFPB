/*
Faça um programa que leia o código, a descrição, o valor unitário e a quantidade em estoque de 10 produtos comercializados em uma papelaria. 
Estas informações deverão ser armazenadas em um vetor de estruturas. 
Depois da leitura dos dados de entrada, o programa deverá: 
    • Realizar uma rotina que permita alterar a descrição, o valor unitário e a quantidade em estoque de determinado produto, que deverá ser localizado por meio do seu código; 
    • Realizar uma rotina que mostre todos os produtos cuja descrição comece com determinada letra (informada pelo usuário); 
    • Mostrar todos os produtos com quantidade em estoque inferior a 5 unidades.
*/

#include <stdio.h>
#include <string.h>

#define MAX 10 // Define uma constante MAX de valor 10 que representa a quantidade de produtos lidos

typedef struct {
    int codigo, valor, quantidade;
    char descricao[50];
}produto; // Declaração da estrutura produto

void LerProduto(produto p[]) {
    printf("CADASTRO DOS PRODUTOS\n");

    // Leitura das informações dos produtos
    for (int i=0; i<MAX; i++) {
        printf("\nCodigo do produto: ");
        scanf("%d%*c", &p[i].codigo);

        printf("Descricao do produto: ");
        fgets(p[i].descricao, 50, stdin);
        if (p[i].descricao[strlen(p[i].descricao) - 1] == '\n') {
            p[i].descricao[strlen(p[i].descricao) - 1] = '\0';
        }

        printf("Valor do produto: ");
        scanf("%d%*c", &p[i].valor);
        printf("Quantidade do produto: ");
        scanf("%d%*c", &p[i].quantidade);
    }
}

void AlterarProduto(produto p[], int codigo) {
    for (int i=0; i<MAX; i++) {
        if (p[i].codigo == codigo) {
            printf("\nAlterando o produto de codigo %d...\n", codigo);
            printf("Nova descricao: ");
            // Limpar o buffer antes de ler a nova descricao
            while (getchar() != '\n'); 
            fgets(p[i].descricao, 50, stdin); 
            // Limpar o caractere de nova linha (\n) do buffer
            if (p[i].descricao[strlen(p[i].descricao) - 1] == '\n') {
                p[i].descricao[strlen(p[i].descricao) - 1] = '\0';
            }
            
            // Mostra o produto alterado
            printf("Novo valor: ");
            scanf("%d%*c", &p[i].valor);
            printf("Nova quantidade: ");
            scanf("%d%*c", &p[i].quantidade);
            printf("Produto alterado com sucesso.\n\n");
            return;
        }
    }
    printf("Produto nao encontrado.\n\n");
}

void ProdutosComDescricao(produto p[], char letra) {
    printf("Produtos com descricao iniciada por '%c':\n", letra);
    
    for (int i=0; i<MAX; i++) {
        if (p[i].descricao[0] == letra) { // Verifica o primeiro caractere da descrição
            printf("Codigo: %d\n", p[i].codigo);
            printf("Descricao: %s\n", p[i].descricao);
            printf("Valor: %d\n", p[i].valor);
            printf("Quantidade: %d\n", p[i].quantidade);
            printf("\n");
        }
    }
}

void ProdutosComEstoqueBaixo(produto p[]) {
    printf("Produtos com estoque inferior a 5 unidades:\n");

    for (int i=0; i<MAX; i++) {
        if (p[i].quantidade < 5) { // Verifica a quantidade do produto no estoque
            printf("Codigo: %d\n", p[i].codigo);
            printf("Descricao: %s\n", p[i].descricao);
            printf("Valor: %d\n", p[i].valor);
            printf("Quantidade: %d\n", p[i].quantidade);
            printf("\n");
        }
    }
}

int main() {
    produto p[MAX]; // Array p do tipo produto (struct)
    char letra;
    int codigo;

    // Chamada de funções
    LerProduto(p);

    printf("\nDigite o codigo do produto que deseja alterar: ");
    scanf("%d", &codigo);

    AlterarProduto(p, codigo);

    printf("\nDigite a letra para buscar por descricao: ");
    scanf(" %c", &letra);

    ProdutosComDescricao(p, letra);
    ProdutosComEstoqueBaixo(p);
    
    return 0;
}