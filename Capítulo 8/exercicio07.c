/*
Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. 
Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.
*/

# include <stdio.h>
# include <stdlib.h>

struct horario{
    int hora, minuto, segundo;
};

int main(){

    int i;
    struct horario horas[5], maior_hora;

    for(i=0; i<5; i++){
        printf("Informe um horario.\n");
        do{
            printf("Digite a hora (de 0 a 24): ");
            scanf("%i", &horas[i].hora);
        }while(horas[i].hora < 0 || horas[i].hora > 24);
        do{
            printf("Digite o minuto (de 0 a 59): ");
            scanf("%i", &horas[i].minuto);
        }while(horas[i].minuto < 0 || horas[i].minuto > 59);
        do{
            printf("Digite o segundo (de 0 a 59): ");
            scanf("%i", &horas[i].segundo);
        }while(horas[i].segundo < 0 || horas[i].segundo > 59);
    }

    for(i=0; i<5; i++){
        if(i == 0){
            maior_hora = horas[i];
        }
        else{
            if(horas[i].hora > maior_hora.hora){
                maior_hora = horas[i];
            }
            else{
                if(horas[i].hora == maior_hora.hora){
                    if(horas[i].minuto > maior_hora.minuto){
                        maior_hora = horas[i];
                    }
                    else{
                        if(horas[i].minuto == maior_hora.minuto){
                            if(horas[i].segundo > maior_hora.segundo){
                                maior_hora = horas[i];
                            }
                        }
                    }
                }
            }
        }
    }

    printf("\nA maior hora digitada foi %02i:%02i:%02i", maior_hora.hora, maior_hora.minuto, maior_hora.segundo);

    return 0;
}
