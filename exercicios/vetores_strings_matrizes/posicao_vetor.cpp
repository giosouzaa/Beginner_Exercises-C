/*
Crie um vetor cujo conteúdo são 10 números inteiros. Peça ao usuário que insira um número inteiro e, em seguida, imprima na tela se este número está ou não contido no vetor.
Caso esteja contido, indique sua posição.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  
	int v[10]={1,2,3,4,5,6,7,8,9,10}, i,n,x;
  
	printf("\nInsira um numero inteiro:\n");
	scanf("%d",&n);
  
	x=0;
  
	for(i=0;i<10;i++){
		if(n==v[i]){
			printf("\nO numero escolhido %d existe no vetor e ocupa a posicao %d\n\n",n,i+1);
			break;
		}
		x=x+1;
	}
  
	if(x==10){
		printf("\nOnumero %d nao existe no vetor\n\n",n);
	}
  
	system("pause");
	return 0;
}
