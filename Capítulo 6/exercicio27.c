/*
Faça um programa que leia uma matriz de tamanho 6x6. Calcule e imprima a soma dos elementos dessa matriz que estão abaixo da diagonal principal.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j;
    float matriz[6][6], soma_abaixo_principal = 0;

    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            if(i > j){
                soma_abaixo_principal += matriz[i][j];
            }
        }
    }

    printf("A soma dos elementos que estao acima da diagonal principal eh %f", soma_abaixo_principal);
    
    return 0;
}
