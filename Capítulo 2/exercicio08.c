/*
Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int n1, n2;

    printf("Digite um numero inteiro, depois tecle ENTER e depois repita esse processo mais uma vez:\n");
    scanf("%i %i", &n1, &n2);
    printf("Os numeros digitados foram %i e %i (em ordem inversa).", n2, n1);

    return 0;
}