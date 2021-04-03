/*

003 - Mais vetores como ponteiros
  Peça ao usuário que insira 5 números inteiros e armazene-os em um vetor. 
  Em seguida, imprima na tela o dobro dos valores inseridos e seus respectivos endereços.
  
*/

#include<stdio.h>
#include<stdlib.h>

int main (){

	int a[5],*p[5],i;
  
	printf("\nInsira 5 numeros inteiros:\n");
	
  for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
  
	system("cls");
  
	printf("\nO dobro dos valores inseridos e seus respectivos enderecos sao:\n\n");
  
	for(i=0;i<5;i++){
		printf("2xa[%d]=%d\tendereco:%d\n\n",i+1,(*p[i])*2,p[i]);
	}
  
	system("pause");
	return 0;
}
