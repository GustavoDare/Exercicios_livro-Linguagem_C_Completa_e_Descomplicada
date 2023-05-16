/*
Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e 
substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string[40], c;
    int i, n_vogais;

    printf("Digite uma string: ");
    gets(string);

    for(i=strlen(string); i>=0; i--){
        c = string[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            n_vogais++;
            string[i] = 'i';
        }
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            n_vogais++;
            string[i] = 'I';
        }
    }

    printf("\nA string digitada possui %i vogais.", n_vogais);
    printf("\nA nova string, %s, possui %i vogais.", string, n_vogais);

    return 0;
}