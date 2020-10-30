#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//Escreva um programa que leia ou gere um vetor de N elementos inteiros. 
//A seguir, conte quantos valores impares existem no vetor. 
//Apresente o vetor e a quantidade de impares no final.
 
int main(){
	int numeros[100], n, i, op, cont=0;
	
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler\n: ");
	scanf("%d",&op);
	
	if(op == 1)
		geraVetor(numeros,n);
	else
		leiaVetor(numeros,n);	
	mostraVetor(numeros,n);
	
	printf("\n");
	
	for(i=0;i<n;i++){
		if(numeros[i]%2 != 0){
			cont++;
			printf("%d |",numeros[i]);
		}
	}
	printf("\nEle possui %d numeros impares\n",cont);
	return 0;
}
