/*
Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float max, min, vetorX[10];
    int i;

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetorX[i]);
        if(i == 0){
            max = vetorX[0];
            min = vetorX[0];
        }
        else{
            if(vetorX[i] > max){
                max = vetorX[i];
            }
            if(vetorX[i] < min){
                min = vetorX[i];
            }
        }
    }
    printf("O maior numero digitado foi %f e o menor foi %f", max, min);

    return 0;
}
