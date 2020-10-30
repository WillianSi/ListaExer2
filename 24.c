#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

//Escrever um programa C que gere uma matriz de N Linhas x M 
//Colunas  e apresente sua diagonal secundária. 

int main(){
	int mat[100][100], linhas, cols, i, j, l, c;
	
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	
	geraMatriz(mat,linhas,cols);
	
	mostraMatriz(mat,linhas,cols);
	
	printf("A sua diagonal principal he: ");
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
				if(i + j == linhas-1)
					printf("%d |",mat[i][j]);
	
	return 0;
}
