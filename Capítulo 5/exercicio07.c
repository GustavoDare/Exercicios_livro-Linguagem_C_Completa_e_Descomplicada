/*
Elabore um programa que peça ao usuário para digitar 10 valores. Some esse valores e apresente o resultado na tela.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i;
    float numero, soma = 0;

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);
        soma += numero;
    }
    printf("A soma dos 10 numeros digitados eh %f\n", soma);

    return 0;
}
