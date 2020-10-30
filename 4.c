#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//Escreva um programa que leia ou gere um vetor de N elementos inteiros. 
//A seguir, conte quantos valores pares existem no vetor. Apresente a 
//média dos valores pares. 

int main(){
	int numeros[100], n, i, op, cont=0, contpar=0, soma=0, media=0;
	
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
		cont++;
		if(numeros[i]%2 == 0){
			soma+=numeros[i];
			contpar++;
		}
		media=soma/cont;
	}
	printf("\nExistem %d valores pares\nSua media he: %d\n",contpar,media);
	return 0;
}
