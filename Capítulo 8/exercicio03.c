/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

struct coordenadas{
    float ponto_x;
    float ponto_y;
};

int main(){

    float dist;
    struct coordenadas c1, c2;

    printf("Digite o valor da posicao X: ");
    scanf("%f", &c1.ponto_x);
    printf("Digite o valor da posicao Y: ");
    scanf("%f", &c1.ponto_y);

    printf("Digite o valor da posicao X: ");
    scanf("%f", &c2.ponto_x);
    printf("Digite o valor da posicao Y: ");
    scanf("%f", &c2.ponto_y);

    dist = sqrt(pow(c1.ponto_x - c2.ponto_x, 2) + pow(c1.ponto_y - c2.ponto_y, 2));
    printf("A distancia entre os pontos fornecidos eh: %f", dist);

    return 0;
}
