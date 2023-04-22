/*
Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. 
O volume de um cilindro circular é calculado por meio da seguinte fórmula: V=pi*raio^2*altura, em que pi=3.141592.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float altura, raio, area;

    printf("Digite a altura de um cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    area = 3.141592 * raio * raio * altura;
    printf("o volume do cilindro eh: %f", area);

    return 0;
}
