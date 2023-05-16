/*
Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char string[40];
    int i = 0, tam_string;

    printf("Digite uma string: ");
    gets(string);

    while(string[i] != '\0'){
        tam_string++;
        i++;
    }

    printf("A string possui %i caracteres", tam_string);

    return 0;
}
