/*

005 - Alocação dinâmica
  Peça ao usuário que indique o tamanho do vetor que será utilizado e aloque a memória dinamicamente durante a execução do programa.
  Em seguida, pela a ele que insira os elementos desse vetor e imprima-os na tela junto com seus respectivos endereços.

*/

#include<stdio.h>
#include<stdlib.h>

int main (){
  
	int n,i,*p;
  
	printf("\nInsira o numero de elementos:\n\n");
	scanf("%d",&n);
  
	p=(int*)malloc(n*sizeof(int));
  
	printf("\nInsira os numeros inteiros:\n");
  
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
  
  system("cls");
  
	for(i=0;i<n;i++){
		printf("\nValor%d: %d\tEndereco:%d\n\n",i+1,p[i],&p[i]);
	}
  
	free(p);
  
	system("pause");
	return 0;
}
