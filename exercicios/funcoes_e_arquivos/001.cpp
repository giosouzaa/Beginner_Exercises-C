/*

001 - Função do cálculo de delta
  Crie uma função para o cálculo de delta da fórmula de Bhaskara.
  Realize o cálculo com os coeficientes fornecidos pelo usuário.
  
*/

#include<stdio.h>
#include<stdlib.h>


float multiplicacao (float a,float b, float c)
{
	float d;
	d=(b*b)-(4*a*c);
	return d;
};

int main (){
  
	float b,a,c,d;
  
	printf("\nInsira os valores de b,a,c:\n");
	scanf("%f%f%f",&b,&a,&c);
  
	d=multiplicacao(a,b,c);
  
	printf("\nO valor de delta e %.1f\n\n",d);
  
	system("pause");
	return 0;
}
