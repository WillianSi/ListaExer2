#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//Durante uma corrida de automóveis com N voltas de duração foram 
//anotados para um piloto, na ordem, os tempos registrados em cada 
//volta. Fazer um programa em C para ler os tempos das N voltas, 
//sendo que os tempos devem ser armazenados em um vetor e após a 
//entrada de todos os tempos de um piloto deve-se apresentar o 
//vetor juntamente com:  
//• melhor tempo;  
//• a volta em que o melhor tempo ocorreu;  
//• tempo médio das N voltas para cada piloto; 

int main(){
	int numeros[100], n, i, cont=0, op, vez, ganhador,menor,soma=0,media=0;
	
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	
	printf("[1] Gerar\n[2] Ler: \n");
	scanf("%d",&op);
	
		if(op == 1)
			geraVetor(numeros,n);
		else
			leiaVetor(numeros,n);	
		mostraVetor(numeros,n);
			
	menor = numeros[0];	
	for(i=0; i<n; i++){
		if(numeros[i]<menor){
			menor=numeros[i];
			ganhador=i;		
		}
	}
	
	for(i=0;i<n;i++)
		soma += numeros[i];
	media = soma / n;
	
	printf("Melhor tempo: %d\n",menor);
	printf("A volta em que o melhor tempo ocorreu foi: %d\n",ganhador+1);
	printf("Tempo médio das N voltas para cada piloto foi: %d\n",media);
	return 0;
	
}
