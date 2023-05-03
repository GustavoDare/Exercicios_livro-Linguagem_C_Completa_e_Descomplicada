/*
Escreva um programa que leia certa quantidade de números imprima o maior deles e quantas vezes o maior número foi lido. 
A quantidade de números a serem lidos deve ser fornecida pelo usuário.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int quantidade, i, rep;
    float numero, max;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%i", &quantidade);

    for(i=0; i<quantidade; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);
        if(i == 0){
            max = numero;
            rep = 1;
        }
        else{
            if(numero > max){
                max = numero;
                rep = 1;
            }
            else{
                if(numero == max){
                    rep += 1;
                }
            }
        }
    }
    printf("O maior numero fornecido foi %f e ele foi fornecido %i vezes.", max, rep);

    return 0;
}
