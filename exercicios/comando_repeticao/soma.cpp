/*
Peça ao usuário 4 números inteiros e positivos e realize a soma entre eles, retornando o resultado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main ()
{
	int n,soma;
	printf("\nInsira 4 numeros inteiros e positivos para a soma:\n");
	soma=0;
	int i=0;
	do{
	scanf("%d",&n);
	if(n>=0)
	soma=soma+n;
	i++;
	}while(i<4);
	
	printf("\nA soma dos numeros inteiros positivos inseridos eh:%d\n\n",soma);
system("pause");
return 0;
	
}
