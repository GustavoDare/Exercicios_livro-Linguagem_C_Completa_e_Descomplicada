/*
Faça um programa que leia uma matriz de tamanho 5x5. Calcule e imprima a soma dos elementos dessa matriz que não pertencem à diagonal principal nem à diagonal secundária.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, n_dim = 5;
    float matriz[5][5], soma = 0;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if((i == j) || ((i+1) + (j + 1) == n_dim + 1)){
                // valores da diagonal principal e diagonal secundária
            }
            else{
                soma += matriz[i][j];
            }
        }
    }

    printf("A soma de todos os elementos que não pertencem nem a diagonal principal e a diagonal secundaria eh %f", soma);

    return 0;
}
