/*
Faça um programa que leia 10 inteiros e imprima sua média.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, numero, soma = 0;
    float media;

    for(i=0; i<10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%i", &numero);
        soma += numero;
    }
    media = soma / 10.00;
    printf("A media dos 10 numeros digitados eh %f\n", media);

    return 0;
}
