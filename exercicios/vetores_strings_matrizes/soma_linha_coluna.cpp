/*
Soma de linhas e colunas
  Peça ao usuário que insira os elementos de uma matriz de números inteiros. Realize a soma dos elementos da linha 1 e da coluna 2. Imprima o resultado na tela
*/

#include<stdio.h>
#include<stdlib.h>

int main (){

	int M[3][3],i,j,linha,coluna;
	printf("\nInsira os elementos da sua matriz 3X3:\n");
  
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&M[i][j]);
		}
	}
  
	linha=0;
	coluna=0;
  
	for(j=0;j<3;j++){
		linha=linha+M[0][j];
	}
  
	for(i=0;i<3;i++){
		coluna=coluna+M[i][1];
	}
  
	printf("\n\nA soma da linha 1 da matriz e %d\nA soma da coluna 2 da matriz e %d\n\n",linha,coluna);
	
system("pause");
return 0;
}
