/*

002 - Se familizarizando com uma estrutura
  Crie uma estrutura de cadastro de uma empresa que contenha as informações: 
  nome, cargo, sexo, idade, código do setor e salario.
  Imprima na tela os dados armazenados.

*/

#include<stdio.h>
#include<stdlib.h>

struct cadastro
{
	char nome[50],cargo[20],sexo;
	int idade,codigo;
	float salario;
}cad;

int main(){
  
	printf("\nNome completo:\n");
	gets(cad.nome);
  
	printf("\nCargo:\n");
	gets(cad.cargo);
  
	printf("\nSexo (Insira F para feminino e M para masculino):\n");
	scanf("%c",&cad.sexo);
	getchar();
  
	printf("\nIdade:\n");
	scanf("%d",&cad.idade);
  
	printf("\nCodigo do setor(0-99):\n");
	scanf("%d",&cad.codigo);
  
	printf("\nSalario:\n");
	scanf("%f",&cad.salario);
	
	system("cls");
	printf("\nNome:%s\nSexo:%c\nIdade:%d\nCargo:%s\nSetor:%d\nSalario:%.2f\n\n",cad.nome,cad.sexo,cad.idade,cad.cargo,cad.codigo,cad.salario);
	
	system("pause");
	return 0;
	
}
