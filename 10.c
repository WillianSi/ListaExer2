#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

// Receber um vetor de N posições do tipo inteiro verificar 
// quantas vezes um dado valor informado pelo usuário se 
// encontra no vetor. Apresente também todos elementos do vetor. 

int main(){
	int numeros[100], n, i, soma=0, op, nom, cont=0;
	
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	
	printf("Qual elemento voce que achar: ");
	scanf("%d",&nom);
	
	printf("[1] Gerar\n[2] Ler\n: ");
	scanf("%d",&op);
	
	if(op == 1)
		geraVetor(numeros,n);
	else
		leiaVetor(numeros,n);	
	mostraVetor(numeros,n);
	for(i=0;i<n;i++)
		if(numeros[i] == nom)
			cont++;
	
	printf("O valor informado aparece %d vez(s)\n",cont);
	return 0;
	
}
