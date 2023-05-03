/*
Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero, i, divisores;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%i", &numero);

    printf("O numero digitado eh divisivel por:\n");
    for(i=1; i<=numero; i++){
        if(numero % i == 0){
            printf("%i ", i);
            divisores++;
        }
    }
    if(divisores == 2){
        printf("\nO numero fornecido eh primo.");
    }
    else{
        printf("\nO numero fornecido nao eh primo.");
    }

    return 0;
}
