/*
Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
	    Altura						        Peso
					        Até 60	Entre 60-90 (inclusive)		Acima de 90
	Menor do que 1,20		  A			   D					    G
	1,20-1,70			      B			   E					    H
	Maior do que 1,70		  C			   F					    I
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float altura, peso;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    if (altura < 1.2){
        if (peso < 60){
            printf("Voce esta na categoria A.");
        }
        else{
            if (peso > 90){
                printf("Voce esta na categoria G.");
            }
            else{
                printf("Voce esta na categoria D.");
            }
        }
    }
    else{
        if (altura > 1.700001){
            if (peso < 60){
                printf("Voce esta na categoria C.");
            }
            else{
                if (peso > 90){
                    printf("Voce esta na categoria I.");
                }
                else{
                    printf("Voce esta na categoria F.");
                }
            }
        }
        else{
            if (peso < 60){
                printf("Voce esta na categoria B.");
            }
            else{
                if (peso > 90){
                    printf("Voce esta na categoria H.");
                }
                else{
                    printf("Voce esta na categoria E.");
                }
            }
        }
    }
    


    return 0;
}
