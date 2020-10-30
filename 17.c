#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//escrevesse um programa que, dadas as notas da agremiação, 
//calcula a sua nota final num dado quesito. 

int main(){
	float numeros[100], soma=0.0, menor=0.0, maior=0.0, resul=0.0;
	int  n, i, op;
	
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler\n: ");
	scanf("%d",&op);
	
	if(op == 1)
		geraVetorReal(numeros,n);
	else
		leiaVetorReal(numeros,n);	
	mostraVetorReal(numeros,n);
	
	menor = numeros[0];	
	for(i=0; i<n; i++)
		if(numeros[i]<menor)
			menor=numeros[i];
	
	maior = numeros[0];	
	for(i=0; i<n; i++)
		if(numeros[i]>maior)
			maior=numeros[i];
				
	for(i=0;i<n;i++)
		soma += numeros[i];
	
	resul=soma-menor-maior;
	printf("Soma do vetor: %.1f",resul);

	return 0;
	
}
