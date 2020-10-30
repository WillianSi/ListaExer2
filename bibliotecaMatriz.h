#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leiaMatriz(int m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("M[%d][%d]:",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
}
//-------------------------
void geraMatriz(int m[][100], int linhas, int cols){
	int i, j;
	srand(time(NULL));
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m[i][j] = rand()%50;
		}
	}
	
}
//------------------------
void mostraMatriz(int m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%3d |", m[i][j]);
		}
		printf("\n");
	}
}
//-----------------------
void leiaMatrizReal(float m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("M[%d][%d]:",i,j);
			scanf("%lf",&m[i][j]);
		}
	}
	
}
//-------------------------
void geraMatrizReal(float m[][100], int linhas, int cols){
	int i, j;
	srand(time(NULL));
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m[i][j] = rand()%50;
		}
	}
	
}
//------------------------
void mostraMatrizReal(float m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%3.2lf |", m[i][j]);
		}
		printf("\n");
	}
}
