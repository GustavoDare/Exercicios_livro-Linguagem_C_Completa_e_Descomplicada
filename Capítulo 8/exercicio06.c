/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, 
seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura. 
Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.
*/

# include <stdio.h>
# include <stdlib.h>

struct aluno{
    int matricula;
    char nome[40];
    float provas[3];
};

int main(){

    int i, j, melhor_nota;
    float media, maior_media, soma;
    struct aluno alunos[5];

    for(i=0; i<5; i++){
        printf("Aluno %i\n", i+1);
        printf("Digite seu numero de matricula: ");
        scanf("%i", &alunos[i].matricula);
        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        gets(alunos[i].nome);
        printf("Digite as notas das suas provas.\n");
        for(j=0; j<3; j++){
            printf("Prova %i: ", j + 1);
            scanf("%f", &alunos[i].provas[j]);
        }
    }

    for(i=0; i<5; i++){
        soma = 0;
        for(j=0; j<3; j++){
            soma += alunos[i].provas[j];
        }
        media = soma / 3;

        if(i == 0){
            maior_media = media;
            melhor_nota = i;
        }
        else{
            if(media > maior_media){
                maior_media = media;
                melhor_nota = i;
            }
        }
    }

    printf("O aluno %s possui a maior media de prova (%f).\nSuas notas sao:\n", alunos[melhor_nota].nome, maior_media);
    for(j=0; j<3; j++){
        printf("\t%f\n", alunos[melhor_nota].provas[j]);
    }

    return 0;
}
