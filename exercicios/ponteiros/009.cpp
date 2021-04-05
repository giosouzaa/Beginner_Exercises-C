/*

009 - Estruturas e ponteiros
  Crie uma estrutura que registre o nome dos alunos e suas respectivas notas, 
  de acordo com a quantidade de alunos fornecida pelo usuário. 
  Imprima na tela os valores inseridos.
  
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct
{
char nome[100];
float nota;
}aluno;

int main (){
	
	int i,e;
	
	printf("\nInsira o numero de alunos:\n");
	scanf("%d",&e);
	
	aluno *a = (aluno*) malloc(e*sizeof(aluno));

	for(i=0;i<e;i++){
		printf("\nInsira o nome do aluno %d:\n",i+1);
		scanf("%s",&a[i].nome);
		printf("\nInsira sua nota:\n");
		scanf("%f",&a[i].nota);
	}
	
	system("cls");
  
	for(i=0;i<e;i++){
		printf("\nAluno%d: %s\tNota: %.2f\n\n",i+1,a[i].nome,a[i].nota);	
	}
  
	system("pause");
	return 0;
}
