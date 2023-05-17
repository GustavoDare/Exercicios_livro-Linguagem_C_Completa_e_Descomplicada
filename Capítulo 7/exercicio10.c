/*
Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula. 
Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string[40];
    int i, carac;

    printf("Digite uma string: ");
    gets(string);

    for(i=strlen(string)-1; i>=0; i--){
        carac = string[i];
        if(carac >= 97 && carac <= 122){
            string[i] = string[i] - 32;
        }
    }

    printf("A string digitada apenas em maiusculas: %s", string);

    return 0;
}
