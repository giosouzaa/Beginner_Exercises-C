/*
Multiplicação entre vetores e matrizes
  Peça ao usuário que insira os elementos de um vetor e de uma matriz de números inteiros. Realize a multiplicação entre os dois e apresente o resultado.
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
  
	int u[3],v[3],m[3][3],i,j,k,x;
  
	printf("\nInsira os 3 elementos do seu vetor:\n");
	for(i=0;i<3;i++){
		scanf("%d",&v[i]);
	}
  
	printf("\nInsira os 9 elementos da sua matriz:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		scanf("%d",&m[i][j]);
		}
	}
		
	x=0;
	
	for(j=0;j<3;j++){
		for(k=0;k<3;k++){
			x=x+(v[k]*m[j][k]);	
		} 
		u[j]=x;
		x=0;		
	}
  
	for(j=0;j<3;j++){
		printf("\nu[%d]=%d",j,u[j]);
	}

	printf("\n\n");
	system("pause");
  
	return 0;
}
