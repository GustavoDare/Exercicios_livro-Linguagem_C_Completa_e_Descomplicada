/*
Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou por 5, mas não simultaneamente pelos dois.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    if (numero % 3 == 0 && numero % 5 != 0){
        printf("Este numero eh divisivel por 3, mas nao por 5.");
    }
    else{
        if (numero % 3 != 0 && numero % 5 == 0){
        printf("Este numero eh divisivel por 5, mas nao por 3.");
        }
        else{
            if (numero % 3 == 0 && numero % 5 == 0){
                printf("Este numero eh divisivel por 3 e por 5.");
            }
            else{
                printf("Este numero nao eh divisivel nem por 3 nem por 5.");
            }
        }
    }

    return 0;
}
