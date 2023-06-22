/*
Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo. 
Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. 
Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

struct Ponto{
    float x, y;
};

struct Retangulo{
    struct Ponto sup_esq, inf_dir;
};

int main(){

    struct Retangulo retangulo;
    float area, diagonal, perimetro;

    printf("Entre com as coordenadas do ponto superior esquerdo de um retangulo");
    printf("\nCoordenada X: ");
    scanf("%f", &retangulo.sup_esq.x);
    printf("Coordenada Y: ");
    scanf("%f", &retangulo.sup_esq.y);
    printf("Entre com as coordenadas do ponto inferior direito de um retangulo: ");
    printf("\nCoordenada X: ");
    scanf("%f", &retangulo.inf_dir.x);
    while (retangulo.inf_dir.x <= retangulo.sup_esq.x){
        printf("Valor invalido.");
        printf("\nCoordenada X: ");
        scanf("%f", &retangulo.inf_dir.x);
    }
    printf("Coordenada Y: ");
    scanf("%f", &retangulo.inf_dir.y);
    while (retangulo.inf_dir.y >= retangulo.sup_esq.y){
        printf("Valor invalido.");
        printf("\nCoordenada Y: ");
        scanf("%f", &retangulo.inf_dir.y);
    }

    area = (retangulo.sup_esq.y - retangulo.inf_dir.y) * (retangulo.inf_dir.x - retangulo.sup_esq.x);
    perimetro = 2 * (retangulo.sup_esq.y - retangulo.inf_dir.y) + 2 * (retangulo.inf_dir.x - retangulo.sup_esq.x);
    diagonal = sqrt(pow((retangulo.sup_esq.y - retangulo.inf_dir.y), 2) + pow((retangulo.inf_dir.x - retangulo.sup_esq.x), 2));

    printf("\nPelo retangulo fornecido temos os seguintes dados.\n");
    printf("Area: %f \nPerimetro: %f \nDiagonal: %f\n", area, perimetro, diagonal);

    return 0;
}
