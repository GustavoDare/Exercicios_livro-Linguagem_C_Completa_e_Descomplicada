/*
Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A - B. 
Mostre na tela os dados do array C.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, k, l;
    float vetorA[10], vetorB[10], vetorC[10];

    printf("Numeros para o vetor A\n");
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetorA[i]);
    }

    printf("Numeros para o vetor B\n");
    for(j=0; j<10; j++){
        printf("Digite um numero: ");
        scanf("%f", &vetorB[j]);
    }

    for(k=0; k<10; k++){
        vetorC[k] = vetorA[k] + vetorB[k];
    }

    printf("O vetorC = vetorA - vetorB. Assim, temos que os elementos do vetorC sao:\n");
    for(l=0; l<10; l++){
        printf("%f,  ", vetorC[l]);
    }

    return 0;
}
