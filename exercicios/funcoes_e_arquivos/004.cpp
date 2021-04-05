/*

004 - Função de Menor
  Crie uma função que verifique 6 números inteiros e positivos fornecidos pelo usuário 
  e indique qual deles é o menor.

*/

#include<stdio.h>
#include<stdlib.h>

int menor (int p[],int n)
{
	int i,menor;
	menor=p[0];
	for(i=0;i<n;i++){
		if(menor>p[i])		
		menor=p[i];
	}
	return menor;
}

int main (){
  
	int v[6],i,m;
  
	printf("\nInsira 6 numeros inteiros e positivos:\n");
	for(i=0;i<6;i++){
		scanf("%d",&v[i]);
	}
  
	m=menor(v,6);
  
	printf("\nO menor dos numeros inseridos e %d\n\n",m);
  
	system("pause");
	return 0;
}
