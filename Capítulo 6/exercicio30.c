/*
Faça um programa que leia uma matriz A de tamanho 5x5. Em seguida, calcule e imprima a matriz B, sendo que B = A^2.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, k;
    float matriz_A[5][5], matriz_B[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz_A[i][j]);
        }
    }
    for(k=0; k<5; k++){
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                matriz_B[i][k] += matriz_A[i][j] * matriz_A[j][k];
            }
        }
    }

    printf("\nA matriz B dada pela matriz A ao quadrado possui os seguintes valores:\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("[%f]", matriz_B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
