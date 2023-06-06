/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. 
Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.
*/

# include <stdio.h>
# include <stdlib.h>

struct atleta{
    char nome[40], esporte[40];
    int idade;
    float altura;
};

int main(){

    int i;
    struct atleta atletas[5], mais_alto, mais_velho;

    for(i=0; i<5; i++){
        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        gets(atletas[i].nome);
        printf("Digite seu esporte: ");
        setbuf(stdin, NULL);
        gets(atletas[i].esporte);
        printf("Digite sua idade: ");
        scanf("%i", &atletas[i].idade);
        printf("Digite sua altura: ");
        scanf("%f", &atletas[i].altura);
    }

    for(i=0; i<5; i++){
        if(i == 0){
            mais_alto = atletas[i];
            mais_velho = atletas[i];
        }
        else{
            if(atletas[i].altura > mais_alto.altura){
                mais_alto = atletas[i];
            }
            if(atletas[i].idade > mais_velho.idade){
                mais_velho = atletas[i];
            }
        }
    }

    printf("\nO atleta mais velho eh: %s \nO atleta mais alto eh: %s", mais_velho.nome, mais_alto.nome);

    return 0;
}
