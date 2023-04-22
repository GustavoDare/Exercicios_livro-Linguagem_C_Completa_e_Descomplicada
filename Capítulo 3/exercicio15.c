/*
Faça um programa para ler um número inteiro positivo de três dígitos. 
Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. 
Exemplo: Número lido = 123 Número gerado = 321.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero_lido, centena, dezena, unidade, numero_gerado;

    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%3i", &numero_lido);
    centena = numero_lido / 100;
    dezena = (numero_lido - centena * 100) / 10;
    unidade = numero_lido % 10;
    numero_gerado = unidade * 100 + dezena * 10 + centena;
    printf("O numero invertido eh: %i", numero_gerado);

    return 0;
}
