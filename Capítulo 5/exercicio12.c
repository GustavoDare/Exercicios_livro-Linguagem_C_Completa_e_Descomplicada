/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. 
Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, soma = 0, numero = -1;

    while(numero < 0){
        printf("Digite um numero inteiro positivo: ");
        scanf("%i", &numero);
    }
    printf("A soma dos dividores do numero %i eh:\n", numero);
    for(i=1; i<numero; i++){
        if(numero%i == 0){
            soma += i;
            if(i == 1){
                printf("1");
            }
            else{
                printf(" + %i", i);
            }
        }
    }
    printf(" = %i", soma);

    return 0;
}
