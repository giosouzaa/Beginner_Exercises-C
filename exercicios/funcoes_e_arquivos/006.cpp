/*

006 - Escrevendo em um arquivo de texto
  Crie um prgrama que crie e escreve em um arquivo de texto um caractere fornececido pelo usuário.
  
*/

#include<stdio.h>
#include<stdlib.h>

int main (){
  
	FILE*arq;
	char a;
  
	arq=fopen("char.txt","w");
  
	printf("\nInsira um caractere:\n");
	scanf("%c",&a);
	getchar();
  
	fputc(a,arq);
  
	fclose(arq);
  
	system("pause");
	return 0;
  
}
