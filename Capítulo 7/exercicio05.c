/*
Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string[40], string_temp[40];
    int i, j, tam_string;

    printf("Digite uma string: ");
    gets(string);

    tam_string = strlen(string);

    for(i=tam_string-1, j=0; i>=0; i--, j++){
        string_temp[j] = string[i];
        string_temp[j+1] = '\0';
    }
    
    for(i=0; i<tam_string; i++){
        string[i] = string_temp[i];
    }

    printf("A variavel que armazenou o que voce digitou agora contem a string invertida: %s", string);

    return 0;
}
