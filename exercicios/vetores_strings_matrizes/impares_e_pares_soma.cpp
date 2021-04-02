/*
Crie dois vetores de números inteiros. No primeiro, insira os números pares de 1 a 20 e no segeundo, os ímpares. 
Imprima na tela a soma dos vetores, somando os elementos com posição correspondente.
*/

#include<stdio.h>
#include<stdlib.h>

int main (){

  int u[10]={2,4,6,8,10,12,14,16,18,20},v[10]={1,3,5,7,9,11,13,15,17,19},w[10],i;
  
	printf("\nA soma dos vetores u[10]={2,4,6,8,10,12,14,16,18,20} e v[10]={1,3,5,7,9,11,13,15,17,19} eh:\n");
  
	for (i=0;i<10;i++){
		w[i]=u[i]+v[i];
		printf("\nw[%d]=%d",i,w[i]);
	}
  
	printf("\n\n");
	system("pause");
	return 0;
}
