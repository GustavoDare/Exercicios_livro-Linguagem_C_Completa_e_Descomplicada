/*
Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor, 
armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, n_elem = 0;
    float valor, numeros[20], quadrados[20];

    printf("Digite 1 milhao (1000000) para nao fornecer mais numeros.\n");
    for(i=0; i<20; i++){
        printf("Digite um numero: ");
        scanf("%f", &valor);
        if(valor != 1000000){
            numeros[i] = valor;
        }
        else{
            break;
        }
        n_elem++;
    }
    for(i=0; i<n_elem; i++){
        quadrados[i] = numeros[i] * numeros[i];
    }

    printf("\nOs numeros armazenados foram:\n");
    for(i=0; i<n_elem; i++){
        printf("%f  ", numeros[i]);
    }
    printf("\nOs quadrados dos numeros armazenados foram:\n");
    for(i=0; i<n_elem; i++){
        printf("%f  ", quadrados[i]);
    }

    return 0;
}
