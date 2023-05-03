/*
Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. 
Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. 
Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int ultimo, atual, n_fibonacci;
    int i, numero = -1;
    ultimo = 0;
    atual = 1;

    while(numero < 0){
        printf("Digite um numero inteiro e positivo: ");
        scanf("%i", &numero);
    }
    if(numero == 0){
        printf("O termo 0 da sequencia de Fibonacci eh: 0");
    }
    else{
        if(numero == 1){
            printf("O 1 termo da sequencia de Fibonacci eh: 1");
        }
        else{
            for(i=2; i<=numero; i++){
            n_fibonacci = ultimo + atual;
            ultimo = atual;
            atual = n_fibonacci;
            }
            printf("O %i termo da sequencia de Fibonacci eh: %i", i, n_fibonacci);
        }
    }

    return 0;
}
