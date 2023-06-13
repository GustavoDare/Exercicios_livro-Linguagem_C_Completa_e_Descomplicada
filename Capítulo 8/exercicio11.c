/*
Escreva um programa que contenha uma estrutura representando uma data válida. Essa estrutura deve conter os campos dia, mês e ano. 
Em seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as duas datas.
*/

# include <stdio.h>
# include <stdlib.h>

struct datas{
    int dia, mes, ano;
};

int main(){

    int i, maior, menor, ano, j, diferenca, dias_decorrentes = 0;
    struct datas data[2];
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(i=0; i<2; i++){

        printf("Digite um ano: ");
        scanf("%i", &data[i].ano);
        if((data[i].ano % 4 == 0 && data[i].ano % 100 != 0) || (data[i].ano % 400 == 0)){
            dias[1] = 29;
        }
        do{
            printf("Digite um mes (entre 1 e 12): ");
            scanf("%i", &data[i].mes);
        } while(data[i].mes < 1 || data[i].mes > 12);
        do{
            printf("Digite o numero do dia do mes: ");
            scanf("%i", &data[i].dia);
        } while(data[i].dia < 1 || data[i].dia > dias[data[i].mes]);
        dias[1] = 28;
    }

    if(data[0].ano > data[1].ano){
        maior = 0;
        menor = 1;
        diferenca = data[0].ano + 1 - data[1].ano;
    }
    else{
        maior = 1;
        menor = 0;
        diferenca = data[1].ano + 1 - data[0].ano;
    }

    for(ano=data[maior].ano, j=1; j<=diferenca; ano--, j++){
        if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
            dias[1] = 29;
        }
        if(ano == data[maior].ano){
            for(i=data[menor].mes; i<13; i++){
                if(i == data[menor].mes){
                    dias_decorrentes += dias[i-1] - data[menor].dia;
                }
                else{
                    dias_decorrentes += dias[i-1];
                }
            }
        }
        else{
            if(j == diferenca){
                for(i=1; i<=data[maior].mes; i++){
                    if(i == data[maior].mes){
                        dias_decorrentes += data[maior].dia;
                    }
                    else{
                        dias_decorrentes += dias[i-1];
                    }
                }
            }
            else{
                for(i=1; i<13; i++){
                    dias_decorrentes += dias[i-1];
                }
            }
        }
        dias[1] = 28;
    }

    printf("Os dias que decorreram entre as datas %i/%i/%i e %i/%i/%i foram %i", data[menor].dia, data[menor].mes, data[menor].ano, data[maior].dia, data[maior].mes, data[maior].ano, dias_decorrentes);

    return 0;
}
