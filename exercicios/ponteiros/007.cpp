/*

007 - Números pares
  Cria um vetor com alocaço dinâmica e peça ao usuário que insira seus elementos. Verifique 
  se algum dos elementos inseridos são números pares. Se houver pares, apresente-os e indique
  seus respectivos endereços. Caso contrário, exiba a mensagem: "Nenhum dos números inseridos é par".

*/

#include<stdio.h>
#include<stdlib.h>

int main(){
  
	int n,i,*p,x;
  
	printf("\nInsira o numero de elementos:\n");
	scanf("%d",&n);
  
	p=(int*)malloc(n*sizeof(int));
  
	printf("\nInsira os elementos:\n");
  
	for(i=0;i<n;i++){	
		scanf("%d",&p[i]);
		getchar();
	}
  
	printf("\nOs elementos pares inseridos e seus respectivos enderecos sao:\n");
  
	x=0;
  
	for(i=0;i<n;i++){
		if(p[i]%2==0){
			printf("\nConteudo:%d\tEndereco:%d\n",p[i],&p[i]);
		}
		else{
			x=x+1;
		}
	}
  
	if(x==n){
		printf("\nNenhum dos numeros inseridos e par\n\n");
	}
  
	free(p);
  
	system("pause");
	return 0;
}
