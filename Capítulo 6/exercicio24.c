/*
Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3x3 de números inteiros. 
Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz. 
Exiba na tela esse array. Por exemplo, a matriz:
	 5  -8  10
	 1   2  15		deverá gerar o vetor		31  4  32
	25  10   7
*/

# include <stdio.h>
# include <stdlib.h>

int main(){

	int i, j, matriz[3][3], vetor_soma[3] = {0, 0, 0};

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite um numero inteiro: ");
			scanf("%i", &matriz[i][j]);
		}
	}

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			vetor_soma[j] += matriz[i][j];
		}
	}
	
	printf("O vetor gerado pela soma das colunas da matriz fornecida eh:\n");
	for(i=0; i<3; i++){
		printf("%i  ", vetor_soma[i]);
	}

    return 0;
}
