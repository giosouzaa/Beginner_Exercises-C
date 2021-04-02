/*
Imprima na tela, em duas colunas, os números pares e os números ímpares de 1 a 20.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
  
	int i,n;
	printf("\nImpares:\tPares:\n");
	
  for(i=1;i<=20;i++){
		if(i%2==0)
		printf("\t\t%d",i);
		if(i%2!=0)
		printf("\n%d",i);			
	}
  
	printf("\n\n");
	system ("pause");
	return 0;
}
