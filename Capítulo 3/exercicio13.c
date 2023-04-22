/*
Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: h=raiz(a^2+b^2). 
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado.
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(){

    float a, b, h;

    printf("Digite o valor de dois catetos de um triangulo: \n");
    scanf("%f %f", &a, &b);
    h = sqrt(pow(a, 2) + pow(b, 2));
    printf("O valor da hipotenusa desse triangulo eh: %f", h);

    return 0;
}
