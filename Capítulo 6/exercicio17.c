/*
Faça um programa que leia uma matriz de tamanho 4x4. Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna).
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, prim_dim, seg_dim;
    float matriz[4][4], maior;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i == 0 && j == 0){
                maior = matriz[0][0];
                prim_dim = 1;
                seg_dim = 1;
            }
            else{
                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                    prim_dim = i + 1;
                    seg_dim = j + 1;
                }
            }
        }
    }

    printf("O maior numero digitado na matriz foi %f e esta localizado na linha %i coluna %i", maior, prim_dim, seg_dim);

    return 0;
}
