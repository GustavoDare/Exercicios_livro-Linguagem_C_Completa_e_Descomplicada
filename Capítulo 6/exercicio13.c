/*
Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem 
em que forem lidos, sendo que, caso o usuário digite um númeto que já foi digitado, o programa deverá pedir a ele para digitar outro número. 
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. 
Exiba na tela o vetor final que foi digitado.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, k, armazenado = 0, diferente = 1;
    float vetor[10], valor;

    for(i=0; i<10; i++){
        if(i == 0){
            printf("Digite um numero: ");
            scanf("%f", &vetor[0]);
        }
        else{
            while(armazenado == 0){
                printf("Digite um numero: ");
                scanf("%f", &valor);
                for(j=0; j<=i; j++){
                    if(valor == vetor[j]){
                        printf("Digite um valor diferente!\n");
                        diferente = 0;
                        break;
                    }
                }
                if(diferente == 1){
                    vetor[i] = valor;
                    armazenado = 1;
                }
                diferente = 1;    
            }
        }
        armazenado = 0;
    }

    printf("Os valores do vetor sao:\n");
    for(k=0; k<10; k++){
        printf("%f  ", vetor[k]);
    }

    return 0;
}
