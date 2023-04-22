/*
Escreva um programa que leia um número inteiro e mostre a 
multiplicação e a divisão desse número por dois (utilize os operadores de deslocamento de bits).
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero, multiplicacao, divisao;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    multiplicacao = numero << 1;
    divisao = numero >> 1;
    printf("Multiplicando por dois da: %i \nDividindo por dois da: %i", multiplicacao, divisao);

    return 0;
}
