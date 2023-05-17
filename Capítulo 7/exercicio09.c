/*
Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando quantas vezes 
a segunda string lida está contida dentro da primeira.
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){

    char string1[40], string2[40];
    int i, j, tam_string1, tam_string2, contida = 0;

    printf("Digite uma string: ");
    gets(string1);
    printf("Digite outra string: ");
    gets(string2);

    tam_string1 = strlen(string1);
    tam_string2 = strlen(string2);

    for(i=0; i<tam_string1; i++){
        if(string1[i] == string2[0]){
            if(tam_string2 == 1){
                contida++;
            }
            else{
                for(j=1; j<tam_string2; j++){
                    if(string1[i+j] != string2[j]){
                        break;
                    }
                    if(j == tam_string2-1 && string1[i+j] == string2[j]){
                        contida++;
                    }
                }
            }
        }
    }

    printf("A segunda string (%s) esta contida na primeira (%s) %i vezes!", string2, string1, contida);

    return 0;
}
