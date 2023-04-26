/*
Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações basicas, por exemplo). 
O usuário escolher uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float n1, n2;
    int escolha;

    printf("Escolha uma das seguintes operacoes: \n[1] Soma \n[2] Subtracao \n[3] Multiplicacao \n[4] Divisao\n");
    scanf("%i", &escolha);

    printf("Digite o primeiro operando: ");
    scanf("%f", &n1);
    printf("Digite o segundo operando: ");
    scanf("%f", &n2);

    switch (escolha){
        case 1:
            printf("%f + %f = %f", n1, n2, (n1 + n2));
            break;
        case 2:
            printf("%f - %f = %f", n1, n2, (n1 - n2));
            break;
        case 3:
            printf("%f * %f = %f", n1, n2, (n1 * n2));
            break;
        case 4:
            printf("%f / %f = %f", n1, n2, (n1 / n2));
            break;
        default:
            printf("Operacao invalida.");
            break;
    }

    return 0;
}
