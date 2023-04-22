/*
Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int n1, n2, desl_esq, desl_dir;

    printf("Entre com dois numeros inteiros:\n");
    scanf("%i %i", &n1, &n2);
    desl_esq = n1 << n2;
    desl_dir = n1 >> n2;
    printf("\nO deslocamento a esquerda do primeiro pelo segundo eh: %i", desl_esq);
    printf("\nO deslocamento a direita do primeiro pelo segundo eh: %i", desl_dir);

    return 0;
}
