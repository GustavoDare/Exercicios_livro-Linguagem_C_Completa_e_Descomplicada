/*
Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade, 
do mais velho para o mais novo.
*/

# include <stdio.h>
# include <stdlib.h>

struct atleta{
    char nome[40], esporte[40];
    int idade;
    float altura;
};

int main(){

    int i, j, k, adicionado = 0;
    struct atleta lista_atleta[5], idade_atletas[5], reposicao, reposicao2;

    for(i=0; i<5; i++){
        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        gets(lista_atleta[i].nome);
        printf("Digite seu esporte: ");
        setbuf(stdin, NULL);
        gets(lista_atleta[i].esporte);
        printf("Digite sua idade: ");
        scanf("%i", &lista_atleta[i].idade);
        printf("Digite sua altura: ");
        scanf("%f", &lista_atleta[i].altura);
    }

    for(i=0; i<5; i++){
        if(i == 0){
            idade_atletas[i] = lista_atleta[i];
        }
        else{
            for(j=0; j<=i; j++){
                if(lista_atleta[i].idade > idade_atletas[j].idade){
                    for(k=j; k<i; k++){
                        if(k == j){
                            reposicao = idade_atletas[k];
                            idade_atletas[k] = lista_atleta[i];
                            if(k + 1 == i){
                                idade_atletas[k+1] = reposicao;
                            }
                        }
                        else{
                            reposicao2 = idade_atletas[k];
                            idade_atletas[k] = reposicao;
                            reposicao = reposicao2; 
                            if(k + 1 == i){
                                idade_atletas[k+1] = reposicao;
                            }
                        }
                    }
                    adicionado = 1;
                    break;
                }
            }
            if(adicionado == 0){
                idade_atletas[i] = lista_atleta[i];
            }
            adicionado = 0;
        }
    }

    printf("De acordo com a ordem descrescente de idade, os atletas sao:\n");
    for(i=0; i<5; i++){
        printf("- %s, %i anos, %f m, esporte: %s;\n", idade_atletas[i].nome, idade_atletas[i].idade, idade_atletas[i].altura, idade_atletas[i].esporte);
    }

    return 0;
}
