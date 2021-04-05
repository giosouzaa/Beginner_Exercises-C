/*

007 - Arquivo de notas
  Crie um programa que crie e escreva em um arquivo a média das três notas 
  de matemática, física e química fornececidas pelo usuário.
  
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  
	FILE*arq;
	float n[3],soma=0, media;
	int i;
  
	printf("\nInsira as tres notas de matematica, fisica e quimica:\n");
	for(i=0;i<3;i++){
		scanf("%f",&n[i]);
		soma=soma+n[i];
	}
  
	media=soma/3;
  
	arq=fopen("notas.txt","w");
  
	fprintf(arq,"media: %.1f",media);
  
	fclose(arq);
  
	system("pause");
	return 0;
	
}
