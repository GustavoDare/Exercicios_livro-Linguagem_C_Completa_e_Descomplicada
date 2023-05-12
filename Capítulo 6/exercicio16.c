/*
Faça um programa que leia uma matriz de tamanho 3x3. Imprima na tela o menor valor contidos nessa matriz.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j;
    float matriz[3][3], menor;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i == 0 && j == 0){
                menor = matriz[0][0];
            }
            else{
                if(matriz[i][j] < menor){
                    menor = matriz[i][j];
                }
            }
        }
    }

    printf("O menor numero digitado na matriz foi %f", menor);

    return 0;
}
