/*
Peça ao usuário que preencha um vetor do tipo char e, em seguida, peça que ele insira um caractere para a alise.
Analise cada elemento do vetor e indique se o caractere inserido está ou não contido no vetor. Se estiver, indique sua posição e quantas vezes ele aparece no vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
	char v[10],c;
	int k,i;
	printf("\nPreencha o seu vetor com 10 caracteres:");
  
	for(i=0;i<20;i++){
		scanf("%c",&v[i]);
	}
  
	printf("\nInsira um caractere:\n");
	scanf("%c",&c);
	getchar();
  
	k=0;
  
	for(i=0;i<20;i++){
		if(v[i]==c){
			k=k+1;
			printf("\nO caractere %c se encontra na posicao v[%d]\n",c,i);
		}
	}	
  
	if(k>0){
		printf("\nO caractere %c aparece %d vezes no vetor\n\n",c,k);
	}
	else{
		printf("\nO caractere %c nao aparece no vetor\n\n",c);
	}
  
	system("pause");
	return 0;
}
