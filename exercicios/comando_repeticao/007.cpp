/*

007 - Tabuada com while
	Urilizando o comando while, crie um programa que peça que o usuário digite um número inteiro e, em seguida, apresente sua tabuada de 0 a 10.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){

	int n,i,p;
	
	printf("\nInsira um numero inteiro:\n");
	scanf("%d",&n);
	
	i=0;
	
	printf("\nTabuada do numero %d\n",n);
  
	while(i<=10){
		p=n*i;
		printf("\n%dx%d=%d",n,i,p);
		i++;
	}
  
	printf("\n\n");
	system ("pause");
	return 0;
}
