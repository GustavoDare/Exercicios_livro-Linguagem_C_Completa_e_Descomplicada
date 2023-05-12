/*
Faça um programa que leia uma matriz de tamanho 5x5. Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j;
    float matriz[5][5], soma_cima_principal = 0;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(j > i){
                soma_cima_principal += matriz[i][j];
            }
        }
    }

    printf("A soma dos elementos que estao acima da diagonal principal eh %f", soma_cima_principal);

    return 0;
}
