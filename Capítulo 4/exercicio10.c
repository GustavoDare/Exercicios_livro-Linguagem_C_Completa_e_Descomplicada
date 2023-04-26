/*
Faça um programa que leia três números inteiros positivos e efetues o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:
	Número digitado				    Média
		1			    Geométrica		x * y * z
		2			    Ponderada		(x + y*2 + z*3) / 6
		3			    Harmônica		1 / ((1/x) + (1/y) + (1/z))
		4			    Aritmética		(x + y + z) / 3
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int n1, n2, n3, escolha, media;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%i", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%i", &n2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%i", &n3);
    printf("Escolha a operacao que deseja fazer: \n[1] Geometrica \n[2] Ponderada \n[3] Harmonica \n[4] Aritmetica\n");
    scanf("%i", &escolha);

    switch (escolha){
        case 1:
            media = n1 * n2 * n3;
            printf("A media geometrica eh: %i", media);
            break;
        case 2:
            media = (n1 + n2*2 + n3*3) / 6;
            printf("A media ponderada eh: %i", media);
            break;
        case 3:
            media = n1 * n2 * n3 / (n2 * n3 + n1 * n3 + n1 * n2);
            printf("A media harmonica eh: %i", media);
            break;
        case 4:
            media = (n1 + n2 + n3) / 3;
            printf("A media aritmetica eh: %i", media);
            break;
        default:
            printf("Operacao invalida.");
            break;
    }

    return 0;
}
