/*

004 - Armazenando mais de um registro
  Crie uma estrutura cujos dados serão armazenados em um vetor. Cada espaço do vetor, deve corresponder 
  ao registro de um aluno com os dados: nome, matrícula e média das notas.
  Se média>=5, imprima que o aluno está aprovado. Caso contrário, iprima reprovado para o aluno.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno
{
	char nome[50];
	int matricula;
	float media;
}a[10];

int main(){
  
	int i;
	for(i=0;i<10;i++){
    
		printf("\nNome completo:\n");
		gets(a[i].nome);
    
		printf("\nMatricula:\n");
		scanf("%d",&a[i].matricula);
    
		printf("\nMedia final:\n");
		scanf("%f",&a[i].media);
		getchar();
	}
  
	system("cls");
	
	for(i=0;i<10;i++){
    
		if(a[i].media>=5){
			printf("\nAluno: %d APROVADO\nNome: %s\nMatricula: %d\nMedia final: %.2f\n",i+1,a[i].nome,a[i].matricula,a[i].media);
		}
		else{
			printf("\nAluno: %d REPROVADO\nNome: %s\nMatricula: %d\nMedia final: %.2f\n",i+1,a[i].nome,a[i].matricula,a[i].media);
		}
	}
  
	system ("pause");
	return 0;
}
