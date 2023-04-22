/*
A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
	O primeiro ganhador receberá 46% do total;
	O segundo receberá 32% do total;
	O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){
    
    float ganhador1, ganhador2, ganhador3, importancia;
    
    importancia = 780000;
    ganhador1 = importancia * 0.46;
    ganhador2 = importancia * 0.32;
    ganhador3 = importancia - ganhador1 - ganhador2;

    printf("O premio sera de: \n\n1 lugar - %.2f \n2 lugar - %.2f \n3 lugar - %.2f", ganhador1, ganhador2, ganhador3);

    return 0;
}
