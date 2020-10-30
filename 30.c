#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

//Faça um programa que leia uma matriz 4x3, gere sua transposta e apresente a matriz resultante. 

int main(){
	int mat[100][100], mat1[100][100], linhas=4, cols=3, i, j;
	
	geraMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	
	printf("A soma das matrizes he:\n");

	for(j=0;j<cols;j++){
		for(i=0;i<linhas;i++){
			mat1[i][j] = mat[i][j];
			printf("%3d |", mat1[i][j]);
		}
		printf("\n");
	}	
		
	return 0;
}
