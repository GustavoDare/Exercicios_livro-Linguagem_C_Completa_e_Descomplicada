/*
Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int N, i;

    printf("Digite um numero inteiro: ");
    scanf("%i", &N);

    if(N < 0){
        N = N * (-1);
    }

    printf("O %i primeiros numeros naturais impares sao:\n", N);
    for(i=1; i<=2*N; i=i+2){
        printf("%i  ", i);
    }

    return 0;
}
