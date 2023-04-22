/*
Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. 
A área do círculo é A=pi*raio^2, sendo pi=3.141592.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = 3.141592 * raio * raio;
    printf("A area do circulo eh %f", area);

    return 0;
}
