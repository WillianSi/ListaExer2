#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

//Matriz Identidade é uma matriz quadrada (mesmo número de linhas e colunas) 
//onde todos os elementos da diagonal principal é 1 e os demais elementos 
//da matriz é 0. Gere uma matriz identidade de ordem N e apresente a mesma 
//na tela, onde N deve ser informado pelo usuário.

int main(){
	int mat[100][100], linhas, cols, i, j, n;
	
	printf("Ordem da matriz:");
	scanf("%d",&n);
	
	linhas = n;
	cols = n;
	
	for(i=0;i<100;i++)	{
		for(j=0;j<100;j++){
			if(i == j)
			    mat[i][j] = 1;
			else 
				mat[i][j]=0;
		}
	}
				
	mostraMatriz(mat,linhas,cols);
	    
	return 0;
}
