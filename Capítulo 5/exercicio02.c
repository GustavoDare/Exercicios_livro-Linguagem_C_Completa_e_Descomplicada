/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int N, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &N);

    if(N >= 0){
        printf("A ordem decrescente de 0 ate o numero digitado eh:\n");
        for(i=N; i>=0; i--){
            printf("%i  ", i);
        }
    }
    else{
        printf("Numero invalido.");
    }



    return 0;
}
