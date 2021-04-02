/*

010 - Mulriplicação de uma matriz por um número
	Peça ao usuário que insira os elementos de uma matriz 3X3 de números inteiros. 
	Em seguida multiplique a matriz por 2 e apresente o resultado da nova matriz.
	
*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int m[3][3],n[3][3],i,j;
	printf("\nInsira os elementos da sua matriz 3X3:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m[i][j]);
		}
	}
  
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			n[i][j]=2*m[i][j];
			printf("\nn[%d][%d]=%d",i,j,n[i][j]);
		}
	}
  
	printf("\n\n");
	system("pause");
	return 0;
}
