#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//Faça um programa que leia um vetor X[10]. Substitua a seguir, 
//todos os valores nulos e negativos do vetor X por 1. 
//Em seguida mostre o vetor X.

int main(){
	int numeros[10], n = 10, i, op;

	printf("[1] Gerar\n[2] Ler:\n ");
	scanf("%d",&op);
	
	if(op == 1)
		geraVetor(numeros,n);
	else
		leiaVetor(numeros,n);	
	mostraVetor(numeros,n);
	for(i=0;i<n;i++)
		if(numeros[i] == 0 || numeros[i] < 0)
		numeros[i] = 1;
	
	for(i=0;i<n;i++)
		printf("X[%d] = %d\n",i,numeros[i]);
	
	return 0;
	
}
