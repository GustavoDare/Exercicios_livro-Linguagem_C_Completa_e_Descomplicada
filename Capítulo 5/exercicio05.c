/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, soma = 0;
    
    for(i=2; i<=100; i=i+2){
        soma += i;
    }
    printf("A soma dos 50 primeiros numeros pares eh %i.", soma);

    return 0;
}
