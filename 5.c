#include <stdio.h>
#include "bibliotecaVetor2.h"

//Leia um vetor DNA de caracteres para receber as letras A, T, C e G 
//que representam as bases do DNA. Este vetor será responsável por 
//representar uma fita de um gene de limite de 50 bases. Gere o vetor 
//complementar ao vetor DNA e o apresente (Lembrando as bases 
//complementares A=T C=G).

int main(){
	char dna[50], complementar[50];
	int n, i;
	printf("Quantidade de bases da sequencia de DNA:");
	scanf("%d",&n);

	fflush(stdin);
	gets(dna);
	mostraVetorChar(dna,n);
	for(i=0;i<n;i++){
		switch(dna[i]){
			case 'T': complementar[i] = 'A';
				break;
			case 'A': complementar[i] = 'T';
				break;
			case 'C': complementar[i] = 'G';
				break;
			case 'G': complementar[i] = 'C';
				break;											
		}
	}

	mostraVetorChar(complementar,n);
	return 0;
}
