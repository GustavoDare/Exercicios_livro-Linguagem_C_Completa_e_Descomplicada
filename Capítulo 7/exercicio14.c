/*
O código de César é uma das técnicas de criptografia mais simples e conhecidas. 
É um tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto. 
Por exemplo, com uma troca de três posições, a letra A seria substituída por D, B se tornaria E e assim  por diante. 
Escreva um programa que faça uso desse código de César para três posições. Entre com uma string e imprima a string codificada. 
Exemplo: String: a ligeira raposa marrom saltou sobre o cachorro cansado. Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string[70];
    int i, tam_string;

    printf("Digite uma string: ");
    gets(string);

    tam_string = strlen(string);

    printf("\nA string codificada pelo codigo Cesae de tres posicoes eh:\n");
    for(i=0; i<tam_string; i++){
        if(string[i] == ' '){
            printf(" ");
        }
        else{
            printf("%c", string[i]+3);
        }
    }

    return 0;
}
