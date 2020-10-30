#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotecaMatriz.h"

// Faça um programa que leia duas matrizes N X N de mesma ordem com valores reais. 
// Ofereça ao usuário um menu de opções: (a) somar as duas matrizes (b) subtrair 
// a primeira matriz da segunda (c) adicionar uma constante as duas matrizes (d) 
// imprimir as matrizes 
 
int main(){
	int mat[100][100], mat1[100][100], mat2[100][100], linhas, cols, i, j, n, coms;
	char op;
	
	printf("Ordem da matriz:");
	scanf("%d",&n);
	
	linhas = n;
	cols = n;
	
	geraMatriz(mat,linhas,cols);
	geraMatriz(mat1,linhas,cols);
	
	printf("O que quer fazer com as matrizes: \n\n a)SOMAR\n b)SUBITRAIR\n c)ADICIONAR UMA CONSTANTE\n d)IMPRIMIR AS MATRIZES\n");
	fflush(stdin);
	scanf("%c",&op);
	
	if(op == 'a'){
	printf("A soma das matrizes he:\n");

		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				mat2[i][j] = mat[i][j] + mat1[i][j];
				printf("%3d |", mat2[i][j]);
			}
			printf("\n");
		}	
	}
	
	else if(op == 'b'){
	printf("A soma das matrizes he:\n");

		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				mat2[i][j] = mat[i][j] - mat1[i][j];
				printf("%3d |", mat2[i][j]);
			}
			printf("\n");
		}	
	}
	
	else if(op == 'c'){
		printf("Constamte da matriz:");
		scanf("%d",&coms);
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
				mat[i][j] +=coms;
				mat1[i][j] +=coms;
			}
		}
		mostraMatriz(mat,linhas,cols);
		printf("\n\n\n");
		mostraMatriz(mat1,linhas,cols);
	}
	
	else{
		printf("Matrizes: \n");

		mostraMatriz(mat,linhas,cols);
		printf("\n\n");
		mostraMatriz(mat1,linhas,cols);
	}
		
	return 0;
}
