#include <stdio.h>
#include <string.h>
#include "bibliotecaVetor2.h"

//Leia um vetor de caracteres (limite 100) utilizando a função gets(). 
//Utilize a função strlen (Você deve incluir a biblioteca string.h)  
//para obter a quantidade de elementos do vetor de caracteres.  
//Escreva o vetor lido em ordem inversa.

int main(){
	char letra[100], com[100];
	int n, i, tamanho;
	
	printf("Palavra:");
	fflush(stdin);
	gets(letra);
	
	tamanho = strlen(letra);
	
	printf("Palavra invertida: ");

	for(i=tamanho; i>=0; i--)
       printf("%c" ,letra[i]);
		
	return 0;
}
