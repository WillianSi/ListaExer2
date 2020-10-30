#include <stdio.h>
#include "bibliotecaMatriz.h"

//Leia  uma  matriz inteira  de N Linhas x M Colunas .  
//Após a leitura apresente a matriz criada e encontre 
//a quantidade de números pares,  a quantidade de 
//números ímpares. 

int main(){
	int m[100][100], linhas, cols, cont1=0, cont2=0,i,j;
	
	printf("Qtde de linhas e colunas:");
	scanf("%d%d",&linhas,&cols);
	
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(m[i][j]%2 == 0)
			   cont1++;
			else
			   cont2++;   
		}
	}
	printf("Elementos pares:%d\nElementos impares:%d",cont1,cont2);
	return 0;
}
