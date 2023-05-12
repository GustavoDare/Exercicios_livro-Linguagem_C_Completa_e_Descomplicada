/*
Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal principal.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j;
    float matriz[3][3], soma_diag_princ = 0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i == j){
                soma_diag_princ += matriz[i][j];
            }
        }
    }

    printf("A soma dos numeros da diagonal principal da matriz eh %f.", soma_diag_princ);

    return 0;
}
