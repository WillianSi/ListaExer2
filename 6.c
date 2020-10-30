#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//Escreve um programa que sorteio, aleatoriamente, N números e armazene 
//estes em um vetor. Em seguida, o usuário digita um número e seu programa 
//em C deve acusar se o número digitado está no vetor ou não. Se estiver, 
//diga a posição que está. 

int main(){
	int numeros[100], n, i, cont=0, op, vet, cont1=0;
	
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler\n: ");
	scanf("%d",&op);
	
	if(op == 1)
		geraVetor(numeros,n);
	else
		leiaVetor(numeros,n);	
	mostraVetor(numeros,n);
	
	printf("Digite um numero: \n");
	scanf("%d",&vet);
	
	for(i=0;i<n;i++){
		if(vet == numeros[i]){
			cont++;
		}						
	}
	
	if(cont > 0){
		printf("Ele possui\nNo vetor: ");
			for(i=0;i<n;i++){
			if(vet == numeros[i]){
				printf("[%d]",i);
			}
		}	
	}							
	else
		printf("Ele nao posui");
			
}
