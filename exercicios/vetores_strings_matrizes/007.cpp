/*

007 - Analisando os elementos de uma matriz
	Peça ao usuário que insira os elementos de uma matriz de números inteiros. 
	Em seguida, imprima a matriz na tela e indique a quantidade de números pares contidos nela.
	
*/

#include<stdio.h>
#include<stdlib.h>

int main (){

	int mat[5][6],i,j,p;
	printf("\nInsira os elementos da sua matriz 5X6:\n");
	p=0;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			scanf("%d",&mat[i][j]);
		}
	}
  
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("\nmat[%d][%d]=%d",i,j,mat[i][j]);
			if((mat[i][j])%2==0)
			{
				p=p+1;
			}
		}
	}
  
	printf("\nO numero de elementos pares da matriz eh %d\n\n",p);
	
	system("pause");
	return 0;
}
