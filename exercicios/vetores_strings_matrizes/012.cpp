/*

012 - Comparando strings
  Peça ao usuário que insira duas palavras de até 20 caracteres cada e uma letra. Indique a primeira 
  palavra e o seu tamanho em caracteres. Compare as duas palavras e informe se são iguais ou não. 
  Apresente a concatenação das duas palavras e, por fim, informe se o caractere inserido aparece nas palavras. 
  Se sim, indique quantas vezes aparece.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
  
	char s1[20],s2[20],a,v[20];
	int t,x,y,i;
  
	printf("\nInsira uma palavra de ate 20 caracteres:\n");
	gets(s1);
  
	printf("\nInsira mais uma palavra de ate 20 caracteres:\n");
	gets(s2);
  
	printf("\nInsira uma letra:\n");
	scanf("%c",&a);
	getchar();
  
	printf("\nA primeira palavra foi %s",s1);
	t=strlen(s1);
  
	printf("\nO tamanho da primeira palavra eh: %d",t);
  
	if(strcmp(s1,s2)==0){
		printf("\nAs duas palavras inseridas sao iguais\n");
	}
	else{
		printf("\nAs duas palavras inseridas sao diferentes\n");
	}
  
	strcat(s1,s2);
	printf("\nA concatenacao das duas palavras e %s\n",s1);
  
	x=0;
	y=0;
  
	for(i=0;i<20;i++){
		if(s1[i]==a){
			x=x+1;
			y=1;
		}
	}
  
	if(y==1){
		printf("\nA letra %c aparece %d vezes na primeira palavra\n\n",a,x);	
		}
	else{
		printf("\nO caractere %c nao existe na palavra \n\n",a);
	}
  
	system ("pause");
	return 0;
}
	

