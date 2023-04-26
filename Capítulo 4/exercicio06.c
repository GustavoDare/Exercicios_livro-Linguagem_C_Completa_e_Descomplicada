/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas 
(em que "h" corresponde à altura):
	Homens: (72,7*h)-58
	Mulheres: (62,1*h)-44,7
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    char sexo;
    float altura, peso;

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite o seu sexo (m/f): ");
    scanf(" %c", &sexo);

    if (sexo == 'm' || sexo == 'M'){
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal eh: %f", peso);
    }
    else{
        if(sexo == 'f' || sexo == 'F'){
            peso = (62.1 * altura) - 44.7;
            printf("O seu peso ideal eh: %f", peso);
        }
        else{
            printf("Sexo invalido.");
        }
    }

    return 0;
}
