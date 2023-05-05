/*
Faça um programa que preencha um vetor de tamaho 100 com os 100 primeiros números naturais que não são múltiplos de 7. 
Ao final, imprima esse vetor na tela.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, numero=0, elementos=0, vetor[100];

    while(elementos != 100){
        if(numero % 7 != 0){
            vetor[elementos] = numero;
            elementos++;
        }
        numero++;
    }
    
    printf("O vetor de tamanho 100 eh composto pelos seguintes elementos:\n");
    for(i=0; i<100; i++){
        printf("%i  ", vetor[i]);
    }

    return 0;
}
