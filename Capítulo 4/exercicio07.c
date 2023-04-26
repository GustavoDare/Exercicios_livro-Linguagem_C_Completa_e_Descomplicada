/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. 
Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto
acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
	Estado	MG	SP	RJ	MS
	Imposto	7%	12%	15%	8%
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float imp_MG = 0.07, imp_SP = 0.12, imp_RJ = 0.15, imp_MS = 0.08;
    float valor;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Escolha o estado: \n[1] Minas Gerais \n[2] Sao Paulo \n[3] Rio de Janeiro \n[4] Mato Grosso do Sul\n");
    scanf("%i", &estado);

    if (estado == 1){
        valor += valor * imp_MG;
        printf("O valor final sera de: %f", valor);
    }
    else{
        if (estado == 2){
            valor += valor * imp_SP;
            printf("O valor final sera de: %f", valor);
        }
        else{
            if (estado == 3){
                valor += valor * imp_RJ;
                printf("O valor final sera de: %f", valor);
            }
            else{
                if (estado == 4){
                    valor += valor * imp_MS;
                    printf("O valor final sera de: %f", valor);
                }
                else{
                    printf("Estado invalido.");
                }
            }
        }
    }

    return 0;
}
