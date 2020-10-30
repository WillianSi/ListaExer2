#include <stdio.h>
#include "bibliotecaMatriz.h"

//Receba e apresente uma matriz de N Linhas x M Colunas 
//valores inteiros. Após isso indique qual é o menor e valor 
//da matriz.

int main(){
	int m[100][100], linhas, cols, maior, menor,i,j;
	
	printf("Qtde de linhas e colunas:");
	scanf("%d%d",&linhas,&cols);
	
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	
	menor = m[0][0];
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
			if(m[i][j]< menor)
			   menor = m[i][j];

	printf("Menor elemento:%d",menor);
	return 0;
}
