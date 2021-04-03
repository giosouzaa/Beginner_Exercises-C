/*

004 - Sucessor e antecessor
  Peça ao usuário que insira 10 números inteiros e armazene-os. 
  Imprima na tela os valores inseridos e seus endereços respectivos à posição seguinte.

*/

#include<stdio.h>
#include<stdlib.h>

int main (){
  
	int v[10],*p[10],i;
  
	printf("\nInsira 10 numeros inteiros:\n");
  
	for(i=0;i<10;i++){
		scanf("%d",&v[i]);
		p[i]=&v[i];
	}
	
  system("cls");
  
	printf("\nOs valores inseridos e seus enderecos respectivos a posicao seguinte sao:\n\n");
  
	for(i=0;i<10;i++){
		printf("v[%d]=%d\tendereco:%d\n\n",i+1,*p[i],(p[i]+1));
	}
  
  system ("pause");
	return 0;
  
}
