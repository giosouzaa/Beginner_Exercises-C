/*
Imprima na tela os números pares de 1 a 20.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main  (){
  
	int i,n;
	
	for(i=1;i<=20;i++){
		if(i%2==0)
		printf("\n%d",i);
	}
  
	printf("\n\n");
	system ("pause");
	return 0;
}
