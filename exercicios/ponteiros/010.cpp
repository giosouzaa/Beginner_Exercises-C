/*

010 - Prêmio de loteria
  Crie um programa que leia os 6 números sorteados e os números da cartela do usuário, ambos os dados fornecidos por ele.
  Em seguida, compare os valores e imprima na tela os números sorteados e quais deles foram acertados pelo usuário.
  Se nenhum número tiver sido acertado, exiba a mensagem "Nenhum número foi acertado".


*/

#include<stdio.h>
#include<stdlib.h>

int main (){

	int l[6],c[6],i,j,t;
  
	printf("\nInsira os 6 numeros sorteados e, em seguida, os numeros da sua cartela:\n");
	for(i=0;i<6;i++){
		scanf("%d",&l[i]);
	}
  
	printf("\nInsira os numeros da sua cartela:\n");
	for(i=0;i<6;i++){
		scanf("%d",&c[i]);
	}
  
	system("cls");
  
	printf("\nOs numeros sorteados sao:\n");
	for(i=0;i<6;i++){
	printf("%d\t",l[i]);
	}
  
	j=0;
	t=0;

	printf("\nOs numeros acertados sao:\n");
	for(j=0;j<6;j++){
		for(i=0;i<6;i++){
			if(l[i]==c[j]){
				printf("%d\t",c[j]);
				t++;
			}
	  }	
 	}

	if(t==0){
		printf("\nNenhum numero foi acertado\n");
	}

	printf("\n\n");
  
	system("pause");
	return 0;
}
