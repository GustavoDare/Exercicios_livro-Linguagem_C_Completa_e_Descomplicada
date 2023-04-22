/*
Leia uma velocidade em km/h e apresente convertida em m/s. A fórmula de conversão é M=K/3.6, sendo K a velocidade em km/h e M em m/s.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float vel_km, vel_m;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &vel_km);
    vel_m = vel_km / 3.6;
    printf("Esta velocidade em m/s eh de: %f", vel_m);

    return 0;
}
