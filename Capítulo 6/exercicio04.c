/*
Faça um programa que possua um array de nome A que armazene seus números inteiros. O programa deve executar os seguintes passos:
    a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
    b) Armazene um variável a soma dos valores das posições A[0], A[1], e A[5] do array e mostre na tela essa soma.
    c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
    d) Mostre na tela cada valor do array A, um em cada linha.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){
    
    // Item a)
    int A[6] = {1, 0, 5, -2, -5, 7};
    
    // Item b)
    int soma, i;
    soma = A[0] + A[1] + A[5];
    printf("A soma dos elementos do array A de indice 0, 1 e 5 eh: %i\n", soma);

    // Item c)
    A[3] = 100;

    // Item d)
    printf("\nO array A possui os seguintes elementos:\n");
    for(i=0; i<6; i++){
        printf("%i\n", A[i]);
    }


    return 0;
}
