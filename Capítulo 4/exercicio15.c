/*
Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação, 
lembrando que as raízes são calculadas como [x = (-b +- raíz(delta)) / 2*a] em que [delta = b^2 - 4*a*c] e [a*x^2 + b*x + c = 0] 
representa uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem 
"Não é equação de segundo grau". Do contrário, imprima:
	Se delta < 0, não existe raíz real. Imprima a mensagem "Não existe raiz";
	Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única";
	Se delta > 0, existem duas raízes reais. Imprima as raízes.
*/

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main(){

    float a, b, c, delta, x1, x2;

    printf("Equacao do segundo grau!\n");
    printf("Digite o valor do coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o valor do coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o valor do coeficiente c: ");
    scanf("%f", &c);
    
    if (a != 0){
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0){
            printf("\nNao existe raiz real."); 
        }
        else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            if (delta > 0){
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("\nRaiz dupla.");
                printf("As raizes sao %f e %f", x2, x1);
            }
            else{
                printf("\nRaiz unica.");
                printf("A raiz eh %f", x1);
            }
        }
    }
    else{
        printf("Não é uma equação do segundo grau.");
    }

    return 0;
}
