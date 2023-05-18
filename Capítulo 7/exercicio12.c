/*
Escreva um programa que leia o nome e o valor de determinada mercadoria de um loja. 
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. 
Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char mercadoria[30];
    float valor_total, valor_desconto, valor_a_vista;

    printf("Digite o nome da mercadoria: ");
    gets(mercadoria);
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor_total);

    valor_desconto = valor_total * 0.1;
    valor_a_vista = valor_total - valor_desconto;

    printf("A mercadoria %s possui valor %.2f", mercadoria, valor_total);
    printf("\nPorem se for pagamento a vista tem um desconto de %.2f e fica %.2f", valor_desconto, valor_a_vista);

    return 0;
}
