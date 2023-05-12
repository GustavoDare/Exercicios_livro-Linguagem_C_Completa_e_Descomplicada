/*
Faça um programa que calcule o desvio padrão d de um vetor V contendo n números d = raiz[1/(n-1) * somatório(V[i]) - m] em que m é a média desse vetor.
Considere n=10. O vetor v deve ser lido do teclado.
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(){

    int i, n = 10;
    float vetor[n], somatoria_vetor = 0, desvio, media;

    for(i=0; i<n; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }
    for(i=0; i<n; i++){
        somatoria_vetor += vetor[i];
    }
    media = somatoria_vetor / n;
    printf("%f   %f \n", somatoria_vetor, media);
    desvio = sqrt(somatoria_vetor / (n - 1) - media);

    printf("O desvio do vetor eh: %f", desvio);

    return 0;
}
