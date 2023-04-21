/*
Faça um programa que leia um número inteiro e depois o imprima usando o operador "%f". Veja o que aconteceu.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){
    
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    printf("%f", numero);

    return 0;
}
