/*
Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os seguintes campos: marca, ano, cor e preço.
    a) Escrever a definição da estrutura carro.
    b) Declarar um vetor do tipo da estrutura definida acima, de tamanho 20.
Crie um menu para:
    • Ler o vetor;
    • Ler um preço e mostrar os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido;
    • Ler a marca de um carro e mostrar as informações de todos os carros dessa marca (preço, ano e cor);
    • Ler a marca, ano e cor e informar se existe ou não um carro com essas características. Se existir, informar o preço.
*/

#include <stdio.h>
#include <string.h>

#define MAX 20 // Define uma constante MAX de valor 20 que representa a quantidade de carros lidos

typedef struct {
    int ano;
    float preco;
    char marca[20], cor[20];
}carro; // Declaração da estrutura carro

void LerCarro(carro c[]) {
    int opcao;

    do {
        printf("\nMENU DOS CARROS\n");
        printf("1. Ler o vetor\n");
        printf("2. Mostrar os carros que tenham preco igual ou menor ao preco recebido\n");
        printf("3. Mostrar informacoes de carros por marca\n");
        printf("4. Verificar existencia de carro por caracteristicas\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); // Lê a opção

        // Realiza a ação, de acordo com a escolha
        switch (opcao) {
            case 1: { 
                getchar(); // Limpa o buffer
                for (int i=0; i<MAX; i++) {
                    printf("\nMarca do carro: ");
                    fgets(c[i].marca, 20, stdin); // Lê a marca do carro
                    if (c[i].marca[strlen(c[i].marca) - 1] == '\n') {
                        c[i].marca[strlen(c[i].marca) - 1] = '\0';
                    } // Retira o último \n
                    printf("Ano do carro: ");
                    scanf("%d%*c", &c[i].ano); // Lê o ano do carro
                    printf("Cor do carro: ");
                    getchar(); // Limpa o buffer
                    fgets(c[i].cor, 20, stdin); // Lê a cor do carro
                    if (c[i].cor[strlen(c[i].cor) - 1] == '\n') {
                        c[i].cor[strlen(c[i].cor) - 1] = '\0';
                    } // Retira o último \n
                    printf("Preco do carro: ");
                    scanf("%f%*c", &c[i].preco); // Lê o preço do carro
                }
                break;
            }
            case 2: {
                float preco;
                printf("\nDigite o preco: ");
                scanf("%f", &preco); // Lê o preço do carro
                getchar(); // Limpa o buffer
                printf("Carros com valor inferior ou equivalente ao digitado: \n");
                for (int i=0; i<MAX; i++) {
                    if (c[i].preco <= preco) {                       
                        printf("Marca: %s\n", c[i].marca);
                        printf("Cor: %s\n", c[i].cor);
                        printf("Ano: %d\n\n", c[i].ano);
                    }
                }
                break;
            }
            case 3: {
                char marca[20];
                printf("\nDigite a marca: ");
                scanf("%s", marca); // Lê a marca do carro
                getchar(); // Limpa o buffer
                for (int i=0; i<MAX; i++) {
                    if (strcmp(c[i].marca, marca) == 0) { // Compara a marcas digitadas com a escolhida
                        printf("Preco: %.2f\n", c[i].preco);
                        printf("Ano: %d\n", c[i].ano);
                        printf("Cor: %s\n", c[i].cor);
                    }
                }
                break;
            }
            case 4: {
                char marca[20], cor[20];
                int ano, encontrado = 0;
                printf("\nDigite as informacoes abaixo do carro que procura.\n");
                // Lê as informações do carro que procura
                printf("Marca: ");
                scanf("%s", marca);
                getchar();
                printf("Ano: ");
                scanf("%d", &ano);
                getchar();
                printf("Cor: ");
                scanf("%s", cor);
                for (int i=0; i<MAX; i++) {
                    if ((strcmp(c[i].marca, marca) == 0) && (c[i].ano == ano) && (strcmp(c[i].cor, cor) == 0)) { // Compara as informações
                        encontrado = 1;
                        printf("Existem carros com essas caracteristicas:\n");
                        printf("Preco: %.2f\n", c[i].preco);
                        break;
                    }
                }
                if (!encontrado) {
                    printf("Nao existe carro com essas caracteristicas.\n");
                }
                break;
            }
            case 0: 
                printf("Saindo...\n");
                break;
            default:
                printf("OPCAO INVALIDA! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
}

int main() {
    carro c[MAX]; // Array c do tipo carro (struct)

    LerCarro(c); // Chamada de função
    
    return 0;
}