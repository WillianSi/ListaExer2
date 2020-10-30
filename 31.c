#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"


int main(){
	int mat[100][100], mat2[100][100], linhas, cols, n, i, j, esca;
	
	printf("Tamanho da matriz: ");
	scanf("%d%d",&linhas,&cols);
	printf("\n");
	
	geraMatriz(mat,linhas,cols);	
	mostraMatriz(mat,linhas,cols);
	
	printf("\nEscalar da matriz:");
	scanf("%d",&esca);
	
	printf("\n");
	for(i=0;i<cols;i++){
		for(j=0;j<linhas;j++){
			mat2[i][j] = esca * mat[i][j];
			printf("%3d |",mat2[i][j]);
			}
			printf("\n");
		}

	return 0;
}
