/*
Leia um ângulo em graus e apresente-o convertido em radianos. 
A fórmula de conversão é de R=G*pi/180, sendo G o ângulo em graus e R em radianos e pi=3.141592.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float ang_graus, ang_radianos;

    printf("Digite um angulo em graus: ");
    scanf("%f", &ang_graus);
    ang_radianos = ang_graus * 3.141592 / 180;
    printf("Este angulo eh igual a %f radianos.", ang_radianos);

    return 0;
}
