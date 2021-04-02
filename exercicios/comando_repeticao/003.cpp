/*

003 - Números primos
	Peça ao usuário que insira um número inteiro e diga a ele se o número escolhido é primo ou não é.

	Obs: Número primo é aquele que só é divisível por 1 e por ele mesmo.

*/

#include<stdio.h>
#include<stdlib.h>

main(){
  
	int n,i,divisores;
  
	printf("\nInsira um numero:\n");
	scanf("%d",&n);
	divisores=0;
  
	for(i=1;i<=n;i++){
		if(n%i==0)
		divisores=divisores+1;
	}
  
	if(divisores>2)
	printf("\nO numero %d nao eh primo\n\n",n);
	else
	printf("\nO numero %d eh primo\n\n",n);
  
	system("pause");
	return 0;
}
