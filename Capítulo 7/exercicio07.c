/*
Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem 
a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplo: ovo, arara, rever, asa, osso, etc.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string[40], string_inv[40];
    int i, j, tam_string;

    printf("Digite uma string: ");
    gets(string);

    tam_string = strlen(string);

    for(i=tam_string-1, j=0; i>=0; i--, j++){
        string_inv[j] = string[i];
        string_inv[j+1] = '\0';
    }

    if(strcmp(string, string_inv) == 0){
        printf("A string digitada eh um palindromo!");
    }
    else{
        printf("A string digitada nao eh um palindromo!");
    }

    return 0;
}
