/*
Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). 
Em seguida, imprima os valores lidos separados por uma barra (\).
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int dia, mes, ano;

    printf("Digite o dia, o mes e o ano de hoje, separando as informacoes por espaco e digitando ENTER ao final.\n");
    scanf("%i %i %i", &dia, &mes, &ano);
    printf("A data de hoje: %i/%i/%i", dia, mes, ano);

    return 0;
}