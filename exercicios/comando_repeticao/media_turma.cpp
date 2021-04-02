/*
Peça ao usuário que digite o número de alunos que contém a turma. Em seguida, peça as notas de cada aluno, calcule a média aritmética das notas e imprima o resultado na tela.

Obs: Média aritmética é uma média simples em que você apenas soma os valores e divide o resultado pelo número de elementos somados.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
  
	int alunos,i;
	float nota,soma,media;
  
	printf("\nInsira o numero total de alunos da sala:\n");
	scanf("%d",&alunos);
  
	i=1;
	soma=0;
  
	while(i<=alunos){
		printf("\nInsira a nota do aluno %d\n",i);
		scanf("%f",&nota);
		soma=soma+nota;
		i++;
	}
  
	media=soma/alunos;
	printf("\n\nA media aritmetica da sala eh %.2f\n\n",media);
	
	system ("pause");
	return 0;
}
