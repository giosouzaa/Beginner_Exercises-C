/*

006 - Alocação dinâmica e operações matemáticas
  Peça ao usuário que indique o número de alunos de uma turma e peça para que ele insira a nota de cada um deles.
  Realize a média aritmética das notas e imprima o resultado na tela.

*/

#include<stdio.h>
#include<stdlib.h>

int main (){
  
	int i,a;
	float *p, nota, soma, media;
  
	printf("\nInsira o numero de alunos:\n\n");
	scanf("%d",&a);
  
	p=(float*)malloc(a*sizeof(float));
  
	soma=0;
  
	for(i=0;i<a;i++){
		printf("\nNota do aluno %d:\n",i+1);
		scanf("%f",&p[i]);
		soma=soma+p[i];
	}
  
	media=soma/a;
  
	printf("\nA media aritmetica da turma eh %.2f\n\n",media);
	free(p);
	
	system("pause");
	return 0;	
}
