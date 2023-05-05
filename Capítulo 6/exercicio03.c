/*
Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i;
    float valores[5], soma;

    for(i=0;i<5; i++){
        printf("Digite um numero inteiro: ");
        scanf("%f", &valores[i]);
        soma += valores[i];
    }
    printf("Os valores lidos fora:\n");
    for(i=0;i<5; i++){
        printf("%f ", valores[i]);
    }
    printf("\nE a media deles eh: %f", soma/5);

    return 0;
}
