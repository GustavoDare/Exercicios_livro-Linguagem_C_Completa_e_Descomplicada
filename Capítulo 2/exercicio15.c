/*
Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, 
por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char caractere;
    int n_inteiro;
    float n_decimal;

    printf("Digite um caracater, um numero inteiro e um numero decimal:\n");
    scanf("%c %i %f", &caractere, &n_inteiro, &n_decimal);
    printf("\nForam digitados: %c, %i, %f", caractere, n_inteiro, n_decimal);
    printf("\nForam digitados: %c\t%i\t%f", caractere, n_inteiro, n_decimal);
    printf("\nForam digitados: \n%c\n%i\n%f", caractere, n_inteiro, n_decimal);

    return 0;
}