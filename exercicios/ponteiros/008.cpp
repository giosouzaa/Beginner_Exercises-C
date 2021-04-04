/*

008 - Produto entre dois vetores
  Crie dois vetores com alocaço dinâmica e com elementos fornecidos pelo usuário. 
  Realize uma multiplicação entre os elementos dos dois vetores (com tamanhos iguais)
  e imprima o resultaod na tela.

*/

#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int *p,*q,x,i,n;
	
	printf("\nInsira o numero de elementos dos dois vetores:\n");
	scanf("%d",&n);
	
	p=(int*)malloc(n*sizeof(int));
	q=(int*)malloc(n*sizeof(int));
	
	printf("\nInsira os elementos do primeiro vetor:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);		
	}
	
	printf("\nInsira os elementos do segundo vetor:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&q[i]);
	}
	
	system("cls");
	
	printf("\nO produto dos dois vetores e:\n");
	
	for(i=0;i<n;i++){
		x=p[i]*q[i];
		printf("\nx=%d\n\n",x);
	}
	
	free(p);
	free(q);
	
	system("pause");
	return 0;
}
