/*
Peça ao usuário que insira os elementos da matriz e, em seguida, imprima na tela os elementos da diagonal da matriz.

Obs: Correspondem à diagonal da matriz os elementos cuja posição na vertical (linha) é igual à da horizontal (coluna) (ex: [0][0]).
*/

#include<stdio.h>
#include<stdlib.h>

int main (){

	int m[4][4],i,j;
  
	printf("\nInsira os elementos da sua matriz 4X4:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&m[i][j]);
		}
	}
	
  for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				printf("\nm[%d,%d]=%d",i,j,m[i][j]);
			}
		}
	}
  
	printf("\n\n");
	system("pause");
	return 0;
}
