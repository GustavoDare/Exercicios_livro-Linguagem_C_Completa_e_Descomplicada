/*
Faça um programa que leia uma matriz de tamanho 5x5. Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal ou secundária.
Calcule também a soma dos elementos que não pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, n_dim = 5;
    float matriz[5][5], soma_diag = 0, soma_n_diag = 0, diferenca;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if((i == j) || ((i+1) + (j + 1) == n_dim + 1)){
                soma_diag += matriz[i][j];
            }
            else{
                soma_n_diag += matriz[i][j];
            }
        }
    }
    diferenca = soma_n_diag - soma_diag;

    printf("A diferenca entre a soma de todos os elementos que nao pertencem nem a diagonal principal e a diagonal secundaria e a soma dos elementos que pertencem eh %f - %f = %f", soma_n_diag, soma_diag, diferenca);

    return 0;
}
