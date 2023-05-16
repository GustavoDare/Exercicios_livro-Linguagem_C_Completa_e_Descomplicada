/*
Faça um programa que leia uma string e imprima na tela.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char string[40];

    printf("Digite algo: ");
    gets(string);
    printf("Voce digitou: %s", string);

    return 0;
}
