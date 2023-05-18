/*
Escreva um programa que leia duas strings e as imprima em ordem alfabétia, a ordem em que elas apareceriam em um dicionário.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string1[40], string2[40];
    int i, tam_string1, tam_string2, maior_caracter;

    printf("Digite uma string: ");
    gets(string1);
    printf("Digite outra string: ");
    gets(string2);

    tam_string1 = strlen(string1);
    tam_string2 = strlen(string2);

    if(tam_string1>tam_string2){
        maior_caracter = tam_string1;
    }
    else{
        maior_caracter = tam_string2;
    }

    printf("Colocando as strings em ordem alfabetica temos:\n");
    for(i=0; i<maior_caracter; i++){
        if(string1[i]>string2[i]){
            printf("%s\n%s", string2, string1);
            i = maior_caracter;
        }
        else{
            if(string1[i]<string2[i]){
                printf("%s\n%s", string1, string2);
                i = maior_caracter;
            }
        }
    }

    return 0;
}
