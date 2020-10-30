#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

// Calcular a soma de 2 matrizes de mesma ordem. 

int main(){
	int mat[100][100], mat1[100][100], mat2[100][100], linhas, cols, i, j;
	
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	
	geraMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	
	printf("\n\n");
	
	geraMatriz(mat1,linhas,cols);
	mostraMatriz(mat1,linhas,cols);
	
	printf("A soma das matrizes he:\n");

	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			mat2[i][j] = mat[i][j] + mat1[i][j];
			printf("%3d |", mat2[i][j]);
		}
		printf("\n");
	}	
		
	return 0;
}
