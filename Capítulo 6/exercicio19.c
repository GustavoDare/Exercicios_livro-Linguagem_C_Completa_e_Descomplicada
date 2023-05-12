/*
Leia uma matriz de tamanho 4x4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){
    
    int i, j, maior_10 = 0;
    float matriz[4][4];

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(matriz[i][j] > 10){
                maior_10++;
            }
        }
    }

    printf("A matriz possui %i numeros maior que 10.", maior_10);

    return 0;
}
