/*
Faça um programa que calcule e escreva o valor de S: S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i;
    float soma, numerador, denominador;

    for(i=1, numerador=1, denominador=1; i<=50; i++, numerador+=2, denominador++){
        soma += numerador/denominador;
    }
    printf("S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 = %f", soma);

    return 0;
}
