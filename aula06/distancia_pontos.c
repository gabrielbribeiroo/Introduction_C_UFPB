/*
Implemente um programa, usando funções, que leia as coordenadas de dois pontos e calcule a distância entre eles. 
Utilize as funções double sqrt(double x) e double pow(double base, double exponente) da biblioteca padrão math.h. 
O seu programa deve, obrigatoriamente, utilizar a seguinte função feita por você:
    - Função distancia(): recebe quatro números inteiros como parâmetro representados os pontos,
e retorna a distância entre os pontos.
*/

#include <stdio.h>
#include <math.h>

double distancia(int x1, int y1, int x2, int y2, double *d) {
    *d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    return *d;
}

int main() {
    int x1, x2, y1, y2;
    double dist;

    printf("Digite as coordenadas do primeiro ponto [(X,Y)]:\n");
    scanf("%d\t%d", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto [(X,Y)]:\n");
    scanf("%d\t%d", &x2, &y2);

    dist = distancia(x1, y1, x2, y2, &dist);

    printf("A distancia entre os pontos (%d,%d) e (%d,%d) eh: %.2f\n", x1, y1, x2, y2, dist);

    return 0;
}
