/*
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
	Categoria	Infantil A	Infantil B	Juvenil A	Juvenil B	   Sênior
	Idade		   5-7		   8-10		  11-13		  14-17		maiores de 18 anos
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    if (idade < 5){
        printf("Voce nao pode competir.");
    }
    else{
        if (idade <= 7){
            printf("Voce esta na categoria Infantil A.");
        }
        else{
            if (idade <= 10){
                printf("Voce esta na categoria Infantil B.");
            }
            else{
                if (idade <= 13){
                    printf("Voce esta na categoria Juvenil A.");
                }
                else{
                    if (idade <= 17){
                        printf("Voce esta na categoria Juvenil B.");
                    }
                    else{
                        printf("Voce esta na categoria Senior.");
                    }
                }
            }
        }
    }


    return 0;
}
