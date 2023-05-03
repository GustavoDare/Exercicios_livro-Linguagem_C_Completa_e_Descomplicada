/*
Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor E, conforme a fórmula a seguir: 
E = 1/1! + 1/2! + 1/3! + ... + 1/N!
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    unsigned int numero, i, denominador = 1;
    float soma;

    printf("Digite um valor inteiro positivo: ");
    scanf("%u", &numero);

    for(i=1; i<=numero; i++){
        denominador *= i;
        soma += 1.0/denominador;
    }
    printf("\nE = 1/1! + 1/2! + 1/3! + ... + 1/%u! = %f", numero, soma);

    return 0;
}
