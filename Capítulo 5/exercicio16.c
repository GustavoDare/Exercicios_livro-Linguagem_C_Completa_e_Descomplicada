/*
Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja, Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n.
Apresente um programa que calcule o valor de qualquer Hn.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero, i;
    float Hn;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%i", &numero);

    for(i=1; i<=numero; i++){
        Hn += 1.0/i;
    }

    printf("O Hn de %i elementos eh: %f", numero, Hn);

    return 0;
}
