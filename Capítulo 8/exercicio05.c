/*
Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura Retângulo e um Ponto, 
e informe se esse ponto está ou não dentro do retângulo.
*/

# include <stdio.h>
# include <stdlib.h>

struct Ponto{
    float x, y;
};

struct Retangulo{
    struct Ponto sup_esq, inf_dir;
};

int main(){

    struct Retangulo retangulo;
    struct Ponto ponto;

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

    printf("Entre com as coordenadas de um ponto qualquer: ");
    printf("\nCoordenada X: ");
    scanf("%f", &ponto.x);
    printf("Coordenada Y: ");
    scanf("%f", &ponto.y);

    if ((ponto.x >= retangulo.sup_esq.x && ponto.x <= retangulo.inf_dir.x) && 
        (ponto.y >= retangulo.inf_dir.y && ponto.y <= retangulo.sup_esq.y)){
        printf("O ponto fornecido esta dentro do retangulo fornecido.");
    }
    else{
        printf("O ponto fornecido NAO esta dentro do retangulo fornecido.");
    }

    return 0;
}
