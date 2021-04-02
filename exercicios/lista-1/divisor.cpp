/*
Peça ao usúario um número inteiro e mostre a ele, do número 1 ao número inserido, quais números são seus divisores e quais não são.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int N,i;
	printf("\nInsira um numero inteiro:\n");
	scanf("%d",&N);
	i=1;
	while(i<=N)
	{
		if(N%i!=0)
		printf("\n%d - nao divisor",i);
		if(N%i==0)
		printf("\n%d - divisor",i);
		
		i++;
	}
	printf("\n\n");
	system ("pause");
	return 0;
}
