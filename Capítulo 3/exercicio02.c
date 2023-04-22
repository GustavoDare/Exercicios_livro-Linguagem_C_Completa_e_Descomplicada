/*
Faça um programa que leia um número real e imprima a quinta parte desse número.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float numero;

    printf("Digite um numero para descobrir sua quinta parte: ");
    scanf("%f", &numero);
    printf("A quinta parte de %f eh: %f", numero, numero / 5);

    return 0;
}
