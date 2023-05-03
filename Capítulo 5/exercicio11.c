/*
Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1,2,3,6,11,22,33,66.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, numero = -1;

    while(numero < 0){
        printf("Digite um numero inteiro positivo: ");
        scanf("%i", &numero);
    }
    printf("Os divisores do numero %i sao:\n", numero);
    for(i=1; i<=numero; i++){
        if(numero%i == 0){
            printf("%i  ", i);
        }
    }

    return 0;
}
