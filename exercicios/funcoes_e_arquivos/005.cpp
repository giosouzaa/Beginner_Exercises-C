/*

005 - Função Soma e matrizes
  Crie uma função soma que some todos os elementos das linhas de número par de uma matriz,
  cujos elementos so fornecidos pelo usuário. Imprima o resultado na tela.
  
*/

#include<stdio.h>
#include<stdlib.h>

float soma (float p[3][3])
{
	int i,j;
	float soma=0;
	for(i=0;i<3;i++){
		if(i%2==0){
			for(j=0;j<3;j++){
			soma=soma+p[i][j];
			}
		}
	}
	return soma;
}

int main (){
  
	int i,j;
  
	float m[3][3],s;
  
	printf("\nInsira os elementos da sua matriz 3x3:\n");
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
			scanf("%f",&m[i][j]);
			}
	}
  
	s=soma(m);
  
	printf("\nSoma=%.0f\n\n",s);
  
	system("pause");
	return 0;
}
