/*
Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
A fórmula de conversão é: F=C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float t_fahrenheit, t_celsius;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &t_celsius);
    t_fahrenheit = t_celsius * (9.0/5.0) + 32.0;
    printf("Essa temperatura eh igual a %f Fahrenheit.", t_fahrenheit);

    return 0;
}
