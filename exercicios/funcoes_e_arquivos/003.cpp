/*

003 - Função de potenciação
  Crie um programa que realize a operação de potenciação entre dois números fornecidos pelo usuário.
  Imprima o resultado na tela.
  
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int potencia (int p, int q)
{
	int x;
	x=pow(p,q);
	return x;
}

int main (){
  
	int a,b,x;
  
	printf("\nInsira os valores inteiros de a e b:\n");
	scanf("%d%d",&a,&b);
  
	x=potencia(a,b);
  
	printf("\nResultado: %d\n\n",x);
  
	system ("pause");
	return 0;
	
}
