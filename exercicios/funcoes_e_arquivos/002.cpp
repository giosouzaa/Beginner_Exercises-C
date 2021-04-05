/*

002 - Função de ocnversão
  Crie uma função que realize a conversão de um valor de metro para milímetro.
  Peça ao usuário o valor a ser convertido e imprima na tela o reusltado.
 
*/

#include<stdio.h>
#include<stdlib.h>

float conversao (float m)
{
	float mm;
	mm=m*1000;
	return mm;
};

int main(){
  
	float m,mm;
  
	printf("\nInsira o valor em metro para a conversao:\n");
	scanf("%f",&m);
  
	mm=conversao(m);
  
	printf("\n%.2f\n\n",mm);
  
	system("pause");
	return 0;
}
