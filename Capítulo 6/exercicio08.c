/*
Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números 
negativos e a soma dos números positivos desse vetor.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float vetor[10], soma_positivos=0;
    int i, qtd_negativos=0;

    for(i=0; i<10; i++){
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
    }

    for(i=0; i<10; i++){
        if(vetor[i] > 0){
            soma_positivos += vetor[i];
        }
        else{
            qtd_negativos++;
        }
    }
    
    printf("Foram digitados %i numeros impares e a soma dos numeros pares digitados eh %f", qtd_negativos, soma_positivos);

    return 0;
}
