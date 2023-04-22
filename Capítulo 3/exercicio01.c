/*
Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero;

    printf("Digite um numero para descobrir seu antecessor e seu sucessor: ");
    scanf("%i", &numero);
    printf("O antecessor eh: %i \nO sucessor eh: %i", numero - 1, numero + 1);

    return 0;
}
