/*
Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em minúscula. 
Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
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
        if(carac >= 65 && carac <= 90){
            string[i] = string[i] + 32;
        }
    }

    printf("A string digitada apenas em minusculas: %s", string);

    return 0;
}
