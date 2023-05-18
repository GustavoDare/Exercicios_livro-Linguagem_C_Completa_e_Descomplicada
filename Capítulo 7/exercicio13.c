/*
Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. 
Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string[40];
    unsigned int i, j, n_indices_string;

    printf("Digite uma string: ");
    gets(string);
    
    n_indices_string = strlen(string) - 1;

    printf("Digite um valor inteiro positivo entre 0 e %u, podendo ser um deles: ", n_indices_string);
    scanf("%u", &i);
    printf("Digite um outro valor inteiro positivo maior ou igual que o %u e menor ou igual que %u: ", i, n_indices_string);
    scanf("%u", &j);

    printf("Os caracteres contidos no segmento que vai de %u a %u na string digitada sao:\n", i, j);
    for(; i<=j; i++){
        printf("%c", string[i]);
    }

    return 0;
}
