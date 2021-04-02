/*

002 - Analisando os elementos de um vetor numérico
	Crie um vetor de números inteiros com elementos já pré-definidos. Em seguida, analise cada elemento do vetor e imprima 
	na tela a média aritmética dos elementos, quantos destes são múltiplos de 5, maiores que 10 e menores que 30. 
	Por fim, indique o maior número do vetor.
	
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
  
	float soma,media;
	int u[8]={1,2,3,4,5,6,7,8},i,x,y,maior;
  
	printf("\n");
  
	soma=0;
	maior=0;
	x=0;
	y=0;
  
	for(i=0;i<8;i++){
		printf("u[%d]=%d\t",i,u[i]);
		soma=soma+u[i];
    
		if(u[i]%5==0)
    {x=x+1;}
		if(u[i]>10&&u[i]<30)
		{y=y+1;}
		if(u[i]>maior)
		{maior=u[i];}		
	}
  
	media=soma/8;
	printf("\nA media do vetor e %.1f\n%d sao multiplos de 5\n%d sao maiores que 10 e menores que 30\n%d e o maior numero do vetor\n\n",media,x,y,maior);
	
	system("pause");
	return 0;
}

