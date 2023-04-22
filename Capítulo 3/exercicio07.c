/*
Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float cotacao_dolar, reais, dolares;

    printf("Qual a cotacao do dolar hoje? ");
    scanf("%f", &cotacao_dolar);
    printf("Gostaria de converter quantos reais em dolares? ");
    scanf("%f", &reais);
    dolares = reais / cotacao_dolar;
    printf("Essa quantidade da %f dolares.", dolares);

    return 0;
}
