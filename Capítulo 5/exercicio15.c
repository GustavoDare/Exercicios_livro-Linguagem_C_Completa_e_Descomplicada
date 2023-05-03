/*
Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. 
O programa tem de retornar o maior e o menor número lido.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int min, max, numero, rep = 0;

    printf("Caso queira encerrar o programa digite um numero negativo.\n");
    while(numero >= 0){
        printf("Digite um numero inteiro positivo: ");
        scanf("%i", &numero);
        if(rep == 0){
            max = min = numero;
        }
        if(numero < 0){
            break;
        }
        else{
            if(numero > max){
            max = numero;
            }
            if(numero < min){
                min = numero;
            }
        }  
        rep++;
    }
    if(max < 0 && min < 0){
        printf("Nao foi digitado nenhum numero valido.");
    }
    else{
        printf("Dentre os %i valores validos digitados o maior eh %i e o menor eh %i", rep, max, min);
    }

    return 0;
}
