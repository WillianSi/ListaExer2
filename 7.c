#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//Escreva um programa que leia ou gere dois vetores de N posições 
//e faça a multiplicação dos elementos de mesmo índice, colocando 
//o resultado em um terceiro vetor. Mostre o vetor resultante. 

int main(){
	int numeros[100],numero[100] , n, i, op,resul=0;
	
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler\n: ");
	scanf("%d",&op);
	
	if(op == 1)
		geraVetor(numeros,n);
	else
		leiaVetor(numeros,n);	
	if(op == 1)
		geraVetor(numero,n);
	else
		leiaVetor(numero,n);
		
	mostraVetor(numeros,n);		
	mostraVetor(numero,n);
	
	printf("Resultado da multiplicao dos vetores:\n");
	for(i=0;i<n;i++){
		if(i == i);
		resul= numeros[i]*numero[i];
		printf("[%d]: %d\n",i,resul);
	}
	
	
}
