#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

//Calcular a soma da diagonal secundária de uma matriz de ordem N.

int main(){
	int mat[100][100], linhas, cols, i, j, n, d;
	
	printf("Ordem da matriz:");
	scanf("%d",&n);
	
	linhas = n;
	cols = n;
	
	geraMatriz(mat,linhas,cols);	
	mostraMatriz(mat,linhas,cols);
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
				if(i + j == linhas-1)
						d += mat[i][j];	
	
	printf("\nA soma de sua diagonal secundaria he: %d",d);
	
	return 0;
}
