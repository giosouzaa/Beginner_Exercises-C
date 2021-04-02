/*

001 - Armazenando dados em um vetor
  Peça aousuário que insira os elementos de um vetor de números inteiros. Imprima o vetor na tela e indique quantos dos seus números são pares e quantos são ímpares.
  
*/

#include<stdio.h>
#include<stdlib.h>

main (){
  
	int V[10],i,maior,par,impar;
  
	printf("\nInsira os 10 numeros inteiros do seu vetor:\n");
  
	for(i=0;i<10;i++){
		scanf("%d",&V[i]);
	}
	
	for(i=0;i<10;i++){
		printf("\nV[%d]\t%d\n",i,V[i]);
	}
  
	par=0;
	impar=0;
  
	for(i=0;i<10;i++){
		if(V[i]%2==0)
		par=par+1;
		if(V[i]%2!=0)
		impar=impar+1;
	}
  
	printf("\nO numero de elementos pares e %d e o numero de elementos impares e %d\n\n",par,impar);
  
	system("pause");
	return 0;
}


