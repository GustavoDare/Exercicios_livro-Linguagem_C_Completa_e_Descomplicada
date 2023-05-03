/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i;
    float min, max, numero;

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);
        if(i == 0){
            min = max = numero;
        }
        else{
            if(numero > max){
                max = numero;
            }
            if(numero < min){
                min = numero;
            }
        }
    }
    printf("Dentre os 10 numeros digitados\n");
    printf("O menor valor lido foi %f \nO maior valor lido foi %f ", min, max);

    return 0;
}
