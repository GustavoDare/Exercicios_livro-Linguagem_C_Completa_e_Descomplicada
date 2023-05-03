/*
Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i;

    printf("Os 5 primeiros multiplos de 3 maiores que 0 sao:\n");
    for(i=1; i<=5; i++){
        printf("%i  ", 3*i);
    }


    return 0;
}
