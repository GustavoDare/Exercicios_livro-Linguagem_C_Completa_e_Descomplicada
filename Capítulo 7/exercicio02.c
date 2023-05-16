/*
Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char string[40];

    printf("Digite uma string: ");
    gets(string);

    printf("As primeiras 4 letras do que voce digitou sao: %c%c%c%c", string[0], string[1], string[2], string[3]);

    // Outro jeito
    // string[4] = '\0';
    // printf("As primeiras 4 letras do que voce digitou sao: %s", string);

    return 0;
}
