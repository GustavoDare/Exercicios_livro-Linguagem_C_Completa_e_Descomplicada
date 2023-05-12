/*
Leia uma matriz de tamanho 10x3 com as notas de 10 alunos em três provas. Em seguida, calcule e escreva na tela o números de alunos 
cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3.
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    int i, j, pior_nota, pior_prova;
    int  pior_p1 = 0, pior_p2 = 0, pior_p3 = 0;
    float notas[10][3];

    for(i=0; i<10; i++){
        for(j=0; j<3; j++){
            printf("Digite a nota da %i prova do aluno: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for(i=0; i<10; i++){
        for(j=0; j<3; j++){
            if(j == 0){
                pior_nota = notas[i][0];
                pior_prova = 1;
            }
            else{
                if(notas[i][j] < pior_nota){
                    pior_nota = notas[i][j];
                    pior_prova = j+1;
                }
            }
        }

        switch(pior_prova){
            case 1:
                pior_p1++;
                break;
            case 2:
                pior_p2++;
                break;
            case 3:
                pior_p3++;
                break;
        }
    }

    printf("\nRESULTADO\n");
    printf("%i alunos com pior nota na prova 1\n", pior_p1);
    printf("%i alunos com pior nota na prova 2\n", pior_p2);
    printf("%i alunos com pior nota na prova 3\n", pior_p3);
    printf("Obs.: So eh levado em consideracao a primeira nota mais baixa.");

    return 0;
}
