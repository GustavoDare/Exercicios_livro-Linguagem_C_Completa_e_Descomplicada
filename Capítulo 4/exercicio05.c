/*
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
	O número digitado ao quadrado;
	A raiz quadrada do número digitado.
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(){

    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0){
        printf("\nO quadrado de %f eh: %f", numero, pow(numero, 2));
        printf("\nA raiz quadrada de %f eh: %f", numero, sqrt(numero));
    }
    else{
        printf("O numero digitado eh negativo.");
    }

    return 0;
}
