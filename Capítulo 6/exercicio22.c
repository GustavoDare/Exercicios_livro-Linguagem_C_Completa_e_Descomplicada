/*
Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundária.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, n = 3;
    float matriz[n][n], soma_diag_sec = 0;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if((i + 1) + (j + 1) == n + 1){
                soma_diag_sec += matriz[i][j];
            }
        }
    }

    printf("A soma dos numeros da diagonal secundaria da matriz eh %f.", soma_diag_sec);

    return 0;
}
