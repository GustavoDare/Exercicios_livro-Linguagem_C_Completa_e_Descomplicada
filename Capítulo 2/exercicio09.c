/*
Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. 
Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float n1, n2;

    printf("Digite um numero decimal, depois tecle ENTER e depois repita esse processo mais uma vez:\n");
    scanf("%f %f", &n1, &n2);
    printf("Os numeros digitados foram %f e %f (em ordem inversa).", n2, n1);

    return 0;
}