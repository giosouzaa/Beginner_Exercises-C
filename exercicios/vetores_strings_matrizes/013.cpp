/*

013 - Concatenando strings
  Peça ao usuário que insira duas palavras, concatene-as e apresente o resultado
  
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  
	char s1[40],s2[40];
  
	printf("\nInsira duas palavras:\n");
	scanf("%s%s",&s1,&s2);
  
	strcat(s1," ");
	strcat(s1,s2);
  
	printf("\n%s\n\n",s1);
	
	system("pause");
	return 0;
}
