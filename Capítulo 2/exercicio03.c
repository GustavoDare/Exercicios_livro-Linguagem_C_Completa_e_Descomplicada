/*
Escreva um programa que leia um número inteiro e depois imprima a mensagem "Valor lido:", seguido do valor inteiro. Use apenas um comando printf().
*/

# include <stdio.h>
# include <stdlib.h>

int main(){
    
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    printf("Valor lido: %i", numero);

    return 0;
}
