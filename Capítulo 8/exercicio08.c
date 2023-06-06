/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. 
Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.
*/

# include <stdio.h>
# include <stdlib.h>

struct pessoa{
    char nome[40];
    int dia, mes, ano;
};

int main(){

    int i;
    struct pessoa pessoas[6], mais_novo, mais_velho;

    for(i=0; i<6; i++){
        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        gets(pessoas[i].nome);
        do{
            printf("Digite o dia do seu nascimento (de 1 a 31): ");
            scanf("%i", &pessoas[i].dia);
        }while(pessoas[i].dia < 1 || pessoas[i].dia > 31);
        do{
            printf("Digite o mes do seu nascimento (de 1 a 12): ");
            scanf("%i", &pessoas[i].mes);
        }while(pessoas[i].mes < 1 || pessoas[i].mes > 12);
        printf("Digite o ano do seu nascimento: ");
        scanf("%i", &pessoas[i].ano);
    }

    for(i=0; i<6; i++){
        if(i == 0){
            mais_novo = pessoas[i];
            mais_velho = pessoas[i];
        }
        else{
            if(pessoas[i].ano < mais_velho.ano){
                mais_velho = pessoas[i];
            }
            else{
                if(pessoas[i].ano == mais_velho.ano){
                    if(pessoas[i].mes < mais_velho.mes){
                        mais_velho = pessoas[i];
                    }
                    else{
                        if(pessoas[i].mes == mais_velho.mes){
                            if(pessoas[i].dia < mais_velho.dia){
                                mais_velho = pessoas[i];
                            }
                        }
                    }
                }
            }
            if(pessoas[i].ano > mais_novo.ano){
                mais_novo = pessoas[i];
            }
            else{
                if(pessoas[i].ano == mais_novo.ano){
                    if(pessoas[i].mes > mais_novo.mes){
                        mais_novo = pessoas[i];
                    }
                    else{
                        if(pessoas[i].mes == mais_novo.mes){
                            if(pessoas[i].dia > mais_novo.dia){
                                mais_novo = pessoas[i];
                            }
                        }
                    }
                }
            }
        }
    }

    printf("\nA pessoa mais velha eh: %s \nA pessoa mais nova eh: %s", mais_velho.nome, mais_novo.nome);

    return 0;
}
