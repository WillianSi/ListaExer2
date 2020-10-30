#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

//Elabore um programa que multiplique duas Matrizes M (2x3) e N (3x2) fornecidas pelo usuário. O programa deve: 
// - Ler as matrizes M e N.  
// - Calcular a multiplicação e armazenar na matriz Mult. 
// - Apresentar o resultado. 
 
int main(){
	int mat[100][100], mat1[100][100], mult[100][100], linhasM=2, colsM=3, linhasN=3, colsN=2, i, j, x, aux = 0;
	
	printf("Numeros da matriz M:\n");
	leiaMatriz(mat,linhasM,colsM);
	
	mostraMatriz(mat,linhasM,colsM);
	
	printf("\n\n");
	
	printf("Numeros da matriz N:\n");
	leiaMatriz(mat1,linhasN,colsN);
	
	mostraMatriz(mat1,linhasN,colsN);
	
	printf("Multiplicacao: \n\n");
	
	for(i=0;i<linhasM;i++){
		for(j=0;j<colsN;j++){
			mult[i][j] = 0;
			for(x=0;x<linhasN;x++) {
				aux +=  mat[i][x] * mat1[x][j];
			}
			mult[i][j] = aux;
			aux = 0;
		}
	}
	
	for(i=0;i<linhasM;i++){
		for(j=0;j<colsN;j++){
			printf("%5d |",mult[i][j]);
		}
		printf("\n");
	}
	return 0;
}
