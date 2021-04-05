/*

008 - Lista de números
  Crie um programa que crie e escreva em um arquivo de texto 10 números inteiros fornecidos pelo usuário em forma de lista. 
  Imprima na tela os valores inseridos.
  
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  
	FILE*arq;
	int A[10],B[10],i;
  
	printf("\nInsira 10 numeros inteiros:\n");
	arq=fopen("arq.txt","w");
	if(arq==NULL){
		printf("\nHouve um erro ao abrir o arquivo\n\n");
		exit(1);
	}
  
	for(i=0;i<10;i++){
		scanf("%d",&A[i]);
		fprintf(arq,"%d\n",A[i]);
	}
  
	fclose(arq);
  
	system("cls");
  
	arq=fopen("arq.txt","r");
	for(i=0;i<10;i++){
		fscanf(arq,"%d",&B[i]);
		printf("%d\n",B[i]);
	}
  
	fclose(arq);
  
	system("pause");
	return 0;
}
