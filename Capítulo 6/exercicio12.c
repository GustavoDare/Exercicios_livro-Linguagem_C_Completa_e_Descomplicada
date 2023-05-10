/*
Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, k;
    float vetor[10];

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    printf("Os valores repetidos foram:\n");
    for(j=0; j<10; j++){
        for(k=0; k<10; k++){
            if(vetor[k] == vetor[j] && k < j){
                break;
            }
            else{
                if(vetor[k] == vetor[j] && k > j){
                    printf("%f  ", vetor[j]);
                    break;
                }
            }
        }
    }

    return 0;
}
