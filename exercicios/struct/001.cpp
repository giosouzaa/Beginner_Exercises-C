/*

001 - Criando uma estrutura
  Crie uma estrutura de cadastro que contenha nome, sexo e idade. Peça ao usúario estas informações e armazene no cadastro. 
  Em seguida, imprima a mensagem de "Aceita" ou "Não aceita" com as seguintes condições:
  
  ACEITA - se for sexo feminino E com idade menor que 25 anos;
  NÃO ACEITA - se não cumprir com os requisitos acima.
  
*/

#include<stdio.h>
#include<stdlib.h>

 struct cadastro
 {
 	char nome[50];
 	int sexo;
	int idade;
 }cad;
 
 int main(){
   
 	printf("\nInsira seu nome:\n");
 	gets(cad.nome);
   
 	printf("Digite 1 para feminino e 2 para masculino:\n");
 	scanf("%d",&cad.sexo);
   
 	printf("Digite sua idade:\n");
 	scanf("%d",&cad.idade);
 	getchar();
 	
 	if(cad.sexo==1&&cad.idade<25){
 		printf("\n%s ACEITA(O)\n\n",cad.nome);
	}
	else{
		printf("\n%s NAO ACEITA(O)\n\n",cad.nome);
	}
   
	system("pause");
	return 0;
 }
