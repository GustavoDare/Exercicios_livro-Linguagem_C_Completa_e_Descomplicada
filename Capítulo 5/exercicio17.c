/*
Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
     1
     2  3
     4  5  6
     7  8  9 10
    11 12 13 14 15
    16 17 18 19 20 21
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int n_linhas, numero, i, j;

    printf("Digite um numero inteiro positivo e maior que zero: ");
    scanf("%i", &n_linhas);

    for(i=1, numero = 1; i<=n_linhas; i++){
        for(j=1; j<=i; j++){
            if(numero < 10){
                printf(" %i ", numero);
            }
            else{
                printf("%i ", numero);
            }
            numero++;
        }
        printf("\n");
    }

    return 0;
}
