/*
Faça um programa que leia um número float e depois o imprima usando o operador "%d". Veja o que aconteceu.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero;
    
    printf("Digite um numero decimal: ");
    scanf("%f", &numero);
    printf("%d", numero);

    return 0;
}