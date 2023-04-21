/*
Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char caractere;

    printf("Digite um caractere: ");
    caractere = getchar();
    printf("%i", caractere);

    return 0;
}