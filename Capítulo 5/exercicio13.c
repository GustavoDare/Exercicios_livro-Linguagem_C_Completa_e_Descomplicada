/*
Faça um programa que exiba a soma de todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, soma;

    for(i=1; i<1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }
    printf("A soma de todos os numeros naturais multiplos de 3 ou 5 abaixo de 1000 eh: %i", soma);

    return 0;
}
