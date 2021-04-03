/*

001 - Criando um ponteiro
  Realize uma soma com dois números forncediso pelo usuário e indique o resultado e seu endereço utilizando um ponteiro.

*/

#include<stdio.h>
#include<stdlib.h>

int main (){
  
	int x,y,z,*p;
  
	printf("\nInsira dois valores inteiros:\n");
	scanf("%d%d",&x,&y);
  
	z=x+y;
	p=&z;
  
	printf("\nA soma dos valores inseridos e %d e seu endereco e %d\n\n",z,p);
  
	system("pause");
	return 0;
}
