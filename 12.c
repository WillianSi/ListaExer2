#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou N vezes. 
//Dados os n resultados dos lançamentos que devem ser armazenados em um vetor, 
//determinar o número de ocorrências de cada face.
 
int main(){
	int n, i, numeros[6], la;
	
	printf("Digite o n de vezes que o dado foi lancado:");
	scanf("%d",&n);	
	
	for(i=1;i<=n;i++)
		numeros[i] = 0;
		
	printf("Digite a face do dado que caiu na:\n");
	for(i=1;i<=n;i++){
		printf("[%d] jogada: ",i);
		scanf("%d",&la);
		numeros[la]++;
	}
	
	for(i=1;i<=n;i++)
		if(numeros[i] != 0)
			printf("A face %d caiu %d vezes. \n",i,numeros[i]); 	
	
	return 0;
	
}
