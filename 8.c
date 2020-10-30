#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

// Ler N elementos  de um vetor  A e um valor X. Criar o 
// vetor B contendo os  elementos do vetor A multiplicados por X. 
 
int main(){
	int numeros[100], n, i, soma, op, num;
	
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	
	printf("Dijite um numero: ");
	scanf("%d",&num);
	
	printf("[1] Gerar\n[2] Ler\n: ");
	scanf("%d",&op);

	if(op == 1)
		geraVetor(numeros,n);
	else
		leiaVetor(numeros,n);	
	mostraVetor(numeros,n);
	for(i=0;i<n;i++)
	{
		soma = numeros[i] * num;	
		printf("%d|",soma);
	}		
	return 0;
}
