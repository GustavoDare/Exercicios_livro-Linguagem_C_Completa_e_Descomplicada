/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0, 0).
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
    struct coordenadas c1;

    printf("Digite o valor da posicao X: ");
    scanf("%f", &c1.ponto_x);
    printf("Digite o valor da posicao Y: ");
    scanf("%f", &c1.ponto_y);

    dist = sqrt(pow(c1.ponto_x, 2) + pow(c1.ponto_y, 2));
    printf("A distancia do ponto fornecido da origem do plano cartesiano eh: %f", dist);

    return 0;
}
