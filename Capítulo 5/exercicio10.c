/*
Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero, i, controle = 10, soma = 0;
    float media = 0;

    for(i=0; i!=controle; ){
        printf("Digite um numero inteiro positivo: ");
        scanf("%i", &numero);
        if(numero >= 0){
            soma += numero;
            controle--;
        }
        else{
            printf("O numero nao pode ser negativo.\n");
        }
    }
    media = soma / 10.0;
    printf("\nA media dos 10 numeros digitados eh %f", media);

    return 0;
}
