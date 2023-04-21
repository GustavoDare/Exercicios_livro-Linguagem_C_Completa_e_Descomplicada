/*
Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char c1, c2, c3;

    printf("Digite tres caracteres pressionando enter apos cada um deles\n");
    scanf("%c %c %c", &c1, &c2, &c3);
    printf("Os caracteres digitados foram: \n%c \n%c \n%c", c1, c2, c3);

    return 0;
}