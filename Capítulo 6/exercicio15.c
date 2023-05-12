/*
Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j;
    float vetor[10], variavel_temp;

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    for(i=0; i<10; i++){
        for(j=i; j<10; j++){
            if(vetor[j] < vetor[i]){
                variavel_temp = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = variavel_temp;
            }
        }
    }

    printf("O vetor ordenado possui os seguintes elementos:\n");
    for(i=0; i<10; i++){
        printf("%f  ", vetor[i]);
    }

    return 0;
}
