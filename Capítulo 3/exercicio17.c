/*
Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    printf("O seu complemento bit a bit eh: %i", ~numero);

    return 0;
}
