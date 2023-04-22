/*
Elabore um programa que leia dois números inteiros e exiba o resultado das operações de 
"ou exclusivo", "ou bit a bit", e "e bit a bit" entre eles.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int n1, n2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%i %i", &n1, &n2);
    printf("\nOperacao OU exclusivo: %i", n1 ^ n2);
    printf("\nOperacao OU bit a bit: %i", n1 | n2);
    printf("\nOperacao E bit a bit %i", n1 & n2);

    return 0;
}
