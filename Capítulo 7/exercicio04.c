/*
Faça um programa que leia uma string e a imprima de trás para a frente.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string[40];
    int i;

    printf("Digite uma string: ");
    gets(string);

    printf("A string digitada de tras para frente fica assim:\n");
    for(i=strlen(string); i>=0; i--){
        printf("%c", string[i]);
    }

    return 0;
}
