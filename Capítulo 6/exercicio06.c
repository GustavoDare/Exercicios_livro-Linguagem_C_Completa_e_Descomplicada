/*
Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int vetor[10];
    int i, pares=0;

    for(i=0; i<10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%i", &vetor[i]);
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("Foram digitados %i numeros pares.", pares);

    return 0;
}
