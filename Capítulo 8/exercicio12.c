/*
Crie uma enumeração representando os dias da semana. Agora, escreva um programa que leia um valor inteiro do teclado 
e exiba o dia da semana correspondente.
*/

# include <stdio.h>
# include <stdlib.h>

enum dias_semana {Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main(){

    enum dias_semana dia;

    do{
        printf("Digite um numero de 1 a 7 para saber o dia da semana: ");
        scanf("%d", &dia);
    } while(dia < 1 || dia > 7);

    switch(dia){
        case Domingo:
            printf("O dia da semana digitado foi - Domingo");
            break;
        case Segunda:
            printf("O dia da semana digitado foi - Segunda");
            break;
        case Terca:
            printf("O dia da semana digitado foi - Terca");
            break;
        case Quarta:
            printf("O dia da semana digitado foi - Quarta");
            break;
        case Quinta:
            printf("O dia da semana digitado foi - Quinta");
            break;
        case Sexta:
            printf("O dia da semana digitado foi - Sexta");
            break;
        case Sabado:
            printf("O dia da semana digitado foi - Sabado");
            break;
    }

    return 0;
}
