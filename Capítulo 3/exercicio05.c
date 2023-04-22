/*
Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int idade, ano_atual, ano_nascimento;
    char resp;
    
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite o ano atual: ");
    scanf("%i", &ano_atual);
    printf("Voce ja fez aniversario esse ano (s/n)? ");
    scanf(" %c", &resp);

    if (resp == 's'){
        ano_nascimento = ano_atual - idade;
        printf("Voce nasceu no ano de %i", ano_nascimento);
    }
    else{
        ano_nascimento = ano_atual - idade - 1;
        printf("Voce nasceu no ano de %i", ano_nascimento);
    }

    return 0;
}
