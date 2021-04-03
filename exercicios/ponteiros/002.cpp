/*

002 - Vetores e ponteiros
  Crie um vetor como ponteiro capaz de indicar o endereço dos elementos de um vetor fornecidos pelo usuário. 
  Imprima os resultados na tela.
  
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  
	float v[10],*p[10];
	int i;
  
	printf("\nInsira os 10 elementos do seu vetor:\n");
	
	for(i=0;i<10;i++){
		scanf("%f",&v[i]);
		p[i]=&v[i];	
	}
  
	for(i=0;i<10;i++){
		printf("\nPosicao: %d\nEndereco: %d",i+1,p[i]);
	}
  
	system("pause");
	return 0;
}
