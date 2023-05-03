/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int N, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &N);

    if(N >= 0){
        printf("A ordem crescente de 0 ate o numero digitado eh:\n");
        for(i=0; i<=N; i++){
            printf("%i  ", i);
        }
    } 
    else{
        printf("Numero invalido.");
    }

    return 0;
}
