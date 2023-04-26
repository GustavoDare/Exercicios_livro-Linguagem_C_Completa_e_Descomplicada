/*
Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    if (numero % 2 == 0){
        printf("O numero eh par.");
    }
    else{
        printf("O numero eh impar.");
    }

    return 0;
}
