/*

003 - Cadastro de aluno
  Crie uma estrutura de cadastro que contenha nome, curso e matrícula de um aluno.
  Imprima os dados armazenados na tela

*/

#include<stdio.h>
#include<stdlib.h>

struct aluno
{
	char nome[50],curso[20];
	int matricula;
}a[5];

int main(){
  
	int i;
  
	for(i=0;i<5;i++){  
    
    printf("\nNome completo:\n");
    gets(a[i].nome);

    printf("\nCurso:\n");
    gets(a[i].curso);

    printf("\nNumero de matricula:\n");
    scanf("%d",&a[i].matricula);
    getchar();
	}
  
	system("cls");
  
	for(i=0;i<5;i++){
		printf("\nAluno: %d\nNome: %s\nCurso: %s\nMatricula: %d\n\n",i+1,a[i].nome,a[i].curso,a[i].matricula);
	}
  
	system("pause");
	return 0;
}
