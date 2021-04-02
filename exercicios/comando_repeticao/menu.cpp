/*
Utilizando os comandos do-whilhe e switch, crie um menu com as opções Clientes, Fornecedores, Encomendas e Sair em que o usuário possa escolher uma das opções apresentadas. 
Enquanto ele não selecionar a opção Sair, continue apresentando o menu.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 main(){
	int escolha;
	
	do{
		printf("\nEscolha uma das opcoes:\n1-Clientes\n2-Fornecedores\n3-Encomendas\n4-Sair\n\n");
		scanf("%d",&escolha);
			
		switch (escolha){ 
			case 1:
			printf("\nOpcao escolhida: 1-Clientes\n");
			break;
			case 2:
			printf("\nOpcao escolhida: 2-Fornecedores\n");
			break;
			case 3:
			printf("\nOpcao escolhida: 3-Encomendas\n");
			break;
			case 4:
			printf("\nOpcao escolhida: 4-sair\n\n");
			break;
			default:
			printf("\nOpcao invalida\n");	
		}			
		
	}
	while (escolha!=4);

	system ("pause");
	return 0;
	
}
