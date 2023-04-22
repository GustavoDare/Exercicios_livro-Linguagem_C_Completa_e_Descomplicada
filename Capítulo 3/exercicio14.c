/*
Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char caractere;

    printf("Digite uma letra maiuscula: ");
    caractere = getchar();
    caractere = caractere + 32;
    putchar(caractere);

    return 0;
}
