/*
Crie um programa que leia do reclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, valores[6];

    for(i=0;i<6; i++){
        printf("Digite um numero inteiro: ");
        scanf("%i", &valores[i]);
    }
    printf("Os valores lidos fora:\n");
    for(i=5;i>=0; i--){
        printf("%i ", valores[i]);
    }

    return 0;
}
