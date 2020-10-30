#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotecaMatriz.h"

//Leia um caractere mai�sculo, que indica uma opera��o que deve ser realizada 
//e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a m�dia 
//considerando somente aqueles elementos que est�o acima da diagonal 
//secund�ria da matriz, conforme ilustrado abaixo (�rea verde). 

int main(){
	
	float mat[100][100], resul=0.0;
	int linhas, cols, i,j,med=0;
	char op[2];
	
	printf("ESCONHA S somar e M media:");
	scanf("%s", &op);
	
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
    
	geraMatrizReal(mat,linhas,cols);	
	mostraMatrizReal(mat,linhas,cols);
	
	printf("d-%d\n",cols);
	for(i=0;i<linhas;i++){
        for(j=0;j<cols;j++){
            resul += mat[i][j];
			cols--;
    	}
        
    }

	if(op[0]=='S')
        printf("%.1lf\n",resul);
    else if(op[0]=='M'){
        resul = resul / 60.0;
        printf("%.1lf\n",resul);
    }	
	return 0;
}
