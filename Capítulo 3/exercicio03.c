/*
Faça um programa que leia três valores inteiros e mostre sua soma.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int n1, n2, n3, soma;

    printf("Digite tres numeros inteiros:\n");
    scanf("%i %i %i", &n1, &n2, &n3);
    soma = n1 + n2 + n3;
    printf("A soma dos numeros digitados eh: %i", soma);    

    return 0;
}
