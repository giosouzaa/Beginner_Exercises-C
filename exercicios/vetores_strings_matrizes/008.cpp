/*

008 - Invertendo os elementos de uma matriz
  Peça ao usuário que insira 3 palavrasde 4 letras cada, um caractere de cada vez. 
  Em seguida inverta a posição dos elementos contidos na matriz e apresente o resultado.
  
  As palavras devem aparecer escritas de trás pra frente e em ordem invetida, ou seja, da terceira para a primeira.
  
*/

#include<stdio.h>
#include<stdlib.h>

int main (){

	int i,j;
	char m[3][4];
  
	printf("\nInsira 3 palavras de 4 letras, um caractere por vez:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%c",&m[i][j]);
			getchar();
		}
	}	
  
	for(i=2;i>-1;i--){
		for(j=3;j>-1;j--){
			printf("%c",m[i][j]);
		}
		printf("\n");
	}	
  
	printf("\n");

  system("pause");
  return 0;
}

