/*
Calcular e imprimir na tela uma matriz de tamanho 10x10, em que seus elementos são da forma: 
A[i][j] = 2i + 7j - 2 se i<j;       A[i][j] = 3*i^2 -1 se i = j;         A[i][j] = 4*i^3 + 5*j^2 + 1 se i>j.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, matriz[10][10];

    for(i=1; i<11; i++){
        for(j=1; j<11; j++){
            if(i == j){
                matriz[i-1][j-1] = 3*i*i - 1;
            }
            else{
                if(i < j){
                    matriz[i-1][j-1] = 2*i + 7*j - 2;
                }
                else{
                    matriz[i-1][j-1] = 4*i*i*i + 5*j*j + 1;
                }
            }
        }
    }

    for(i=1; i<11; i++){
        for(j=1; j<11; j++){
            if(matriz[i-1][j-1] < 10){
                printf("[   %i] ", matriz[i-1][j-1]);
            }
            else{
                if(matriz[i-1][j-1] < 100){
                    printf("[  %i] ", matriz[i-1][j-1]);
                }
                else{
                    if(matriz[i-1][j-1] < 1000){
                        printf("[ %i] ", matriz[i-1][j-1]);
                    }
                    else{
                        if(matriz[i-1][j-1] < 10000){
                            printf("[%i] ", matriz[i-1][j-1]);
                        }
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}
