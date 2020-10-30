#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

//Utilizando a função criada acima, dada uma matriz real  NxM,
//verificar se existem elementos repetidos na mesma. Mostrar 
//os valores repetidos. 

int main(){
	float mat[100][100], x;
	int linhas, cols, cont=0, i, j;
	
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	
	geraMatrizReal(mat,linhas,cols);	
	mostraMatrizReal(mat,linhas,cols);
	
	printf("Valor de X:");
	scanf("%lf",&x);

	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		    if(x == mat[i][j])
		       cont++;

	printf("O valor %.2lf existe %d vez(es) na matriz",x,cont);
	return 0;
}
