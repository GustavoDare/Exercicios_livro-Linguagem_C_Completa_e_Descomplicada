/*
Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
	For maior que 20% do salário, imprima: "Empréstimo não concebido.";
	Caso contrário, imprima: "Empréstimo concebido.".
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

    float salario, emprestimo;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &emprestimo);

    if (emprestimo > salario * 0.2){
        printf("Emprestimo nao concebido.");
    }
    else{
        printf("Emprestimo concebido.");
    }
    

    return 0;
}
