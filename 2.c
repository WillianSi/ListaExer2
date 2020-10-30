#include <stdio.h>
#include "bibliotecaVetor2.h"

//Dado um vetor A de n números reais, faça um programa para obter o maior 
//e o menor elemento do vetor, apresente o vetor, maior e menor valor.

int main(){
	int numeros[100], n, i, maior, menor, op;
	
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	
	if(op==1)
		geraVetor(numeros,n);
	else
		leiaVetor(numeros,n);	
	mostraVetor(numeros,n);
	
	maior = numeros[0];
	menor = numeros[0];
	
	for(i=1;i<n;i++){
		if(numeros[i]<menor)
		   menor = numeros[i];
		if(numeros[i]>maior)
		   maior = numeros[i];  
	}
	
	printf("Maior Valor:%d\nMenor Valor:%d\n",maior,menor);
	return 0;
}
