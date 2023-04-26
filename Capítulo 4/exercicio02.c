/*
Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem "Números iguais".
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float n1, n2;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite mais um numero: ");
    scanf("%f", &n2);

    if (n1 == n2){
        printf("Numeros iguais.");
    }
    else{
        if (n1 > n2){
            printf("O valor %f eh maior que %f.", n1, n2);
        }
        else{
            printf("O valor %f eh maior que %f.", n2, n1);
        }
    }

    return 0;
}
