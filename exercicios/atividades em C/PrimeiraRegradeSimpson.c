/*
Nome:   Giovanna Maria de Souza                      29/06/2019
 

Trabalho de Cálculo numérico - Cap.2
Profa: Patrícia Buzzatto Siqueira
---------------------------------------------------------------------------
Compilação:     gcc RegradeSimpsoneRegradosTrapézios.c -lm -o rsrt
Execução:       ./rsrt
---------------------------------------------------------------------------
Primeira Regra de Simpson

Algoritmo: Cálculo do valor numérico de um polinômio e de sua derivada
 
Material de Apoio: Livro - Cálculo Numérico, Ruggiero
 
 
*/

#include <stdio.h>            //input-output
#include <stdlib.h>           //funções envolvendo alocação de memória, controle de processos, conversões e outras.
#include <unistd.h>           // (read, write, close, etc.). 
#include <math.h>         // funções matemáticas básicas
#include <time.h>         //para manipulação de datas e horários
// ------------------------------------------------------------------------------------------
/* global user's parameters */

double x;
double A;
double B;
double *y;
double h;
double SM=0;
double SE=0;
double SI=0;
double SP=0;
double IT=0;
double IS=0;

// ------------------------------------------------------------------------------------------
/* functions    */

double f(double x);
 
// ------------------------------------------------------------------------------------------
//=========================================================================================== 
// main

int main (int argc, char* argv[],int i,int n)
{	
	/*Solicitação do número de subintervalos n*/
	printf("\nInsira o número de subintervalos:\n");
	scanf("%d",&n);

	y=(double *)calloc(n+1,sizeof(int));
	
	/*Solicitação dos extremos (A,B)*/
	printf("\nInsira os extremos de integração A e B:\n");
	scanf("%lf%lf",&A,&B);

	/*Solicitação do valor da função no ponto x
	printf("\nInsira os valores de y:\n");
	for(i=0;i<=n;i++){
			scanf("%lf",&y[i]);
	}*/

	/*Cálculo dos valores funcionais*/

	h=(B-A)/n;
	
	x=A;

	for(i=0;i<=n;i++){ //Atribuição dos valores de f(x)
		y[i] = f(x);
		x = x + h;
	}
	
	for(i=0;i<=n;i++){
		if(i==0||i==n){
			SE=SE+y[i];}
		if(i%2!=0&&i!=n){
			SI=SI+y[i];
			SM=SM+y[i];}
		if(i%2==0&&i!=0&&i!=n){
			SP=SP+y[i];
			SM=SM+y[i];}
	}

	/*Cálculo da integral: Regra de Simpson*/
	IS=(h/3)*(SE+(4*SI)+(2*SP));

	/*Cálculo da integral: Regra dos Trapézios*/
	IT=(h/2)*(SE+(2*SM));

	/*Exibição da resolução numérica das integrais*/
	printf("\nValor da integral:\nSegundo a Primeira Regra de Simpson, %lf\nSegundo a Regra dos trapézios, %lf\n\n",IS,IT);

}
//===========================================================================================

double f(double x){
    return (1/x); 
}
