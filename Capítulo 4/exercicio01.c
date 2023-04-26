/*
Faça um programa que leia dois números e mostre qual deles é o maior.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float n1, n2;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite mais um numero: ");
    scanf("%f", &n2);

    if (n1 >= n2){
        printf("O maior valor digitado eh: %f", n1);
    }
    else{
        printf("O maior valor digitado eh: %f", n2);
    } 

    return 0;
}
