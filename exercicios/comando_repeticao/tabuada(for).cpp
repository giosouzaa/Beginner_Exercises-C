/*
Urilizando o comando for, peça ao usuário um número inteiro e imprima na tela sua tabuada de 0 a 10.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
  
	int n,i,p;
  
	printf("\nInsira um numero inteiro:\n");
	scanf("%d",&n);
	printf("\nTabuada do numero %d:\n\n",n);

  for(i=0;i<=10;i++){
		p=n*i;
		printf("%dx%d=%d\n",n,i,p);
	}
  
	printf("\n");
	system("pause");
	return 0;
}
