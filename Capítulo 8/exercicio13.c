/*
Crie uma enumeração representando os meses do ano. Agora, escreva um programa que leia um valor inteiro do teclado 
e exiba o nome do mês correspondente e quantos dias ele possui.
*/

# include <stdio.h>
# include <stdlib.h>

enum meses {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

int main(){

    enum meses mes;

    do{
        printf("Digite o numero de um mes: ");
        scanf("%d", &mes);
    } while(mes < 1 || mes > 12);

    switch(mes){
        case Janeiro:
            printf("O mes digitado eh Janeiro e ele possui 31 dias.");
            break;
        case Fevereiro:
            printf("O mes digitado eh Fevereiro e ele possui 28 dias.");
            break;
        case Marco:
            printf("O mes digitado eh Marco e ele possui 31 dias.");
            break;
        case Abril:
            printf("O mes digitado eh Abril e ele possui 30 dias.");
            break;
        case Maio:
            printf("O mes digitado eh Maio e ele possui 31 dias.");
            break;
        case Junho:
            printf("O mes digitado eh Junho e ele possui 30 dias.");
            break;
        case Julho:
            printf("O mes digitado eh Julho e ele possui 31 dias.");
            break;
        case Agosto:
            printf("O mes digitado eh Agosto e ele possui 31 dias.");
            break;
        case Setembro:
            printf("O mes digitado eh Setembro e ele possui 30 dias.");
            break;
        case Outubro:
            printf("O mes digitado eh Outubro e ele possui 31 dias.");
            break;
        case Novembro:
            printf("O mes digitado eh Novembro e ele possui 30 dias.");
            break;
        case Dezembro:
            printf("O mes digitado eh Dezembro e ele possui 31 dias.");
            break;
    }

    return 0;
}
