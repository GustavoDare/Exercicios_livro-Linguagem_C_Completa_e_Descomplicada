/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. 
Em seguida, imprima na tela os dados da estrutura lida.
*/

# include <stdio.h>
# include <stdlib.h>

struct pessoa{
    char nome[40];
    int idade;
    char endereco[40];
};

int main(){

    struct pessoa p1;

    printf("Digite seu nome: ");
    gets(p1.nome);
    printf("Digite sua idade: ");
    scanf("%i", &p1.idade);
    setbuf(stdin, NULL);
    printf("Digite seu endereco: ");
    gets(p1.endereco);

    printf("Nome: %s \nIdade: %i \nEndereco: %s", p1.nome, p1.idade, p1.endereco);

    return 0;
}
