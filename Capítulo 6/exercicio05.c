/*
Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float vetor[8];
    int i, j, numero=-1, X, Y;

    for(i=0; i<8; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }
    
    for(j=0; j<2; j++){
        while(numero < 0 || numero > 7){
            printf("Digite um valor entre 0 e 7, podendo ser um desses dois: ");
            scanf("%i", &numero);
            if(numero >=0 && numero <= 7){
                if(j == 0){
                    X = numero;
                }
                else{
                    Y = numero;
                }
            }
        }
        numero = -1;
    }

    printf("Temos entao %f + %f = %f", vetor[X], vetor[Y], vetor[X]+vetor[Y]);

    return 0;
}
