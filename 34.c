#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

//Com base nas informações de sua grade elaborada, crie funções para responder 
//as questões abaixo: a) Qual o dia da semana em que você está mais sobrecarregado?  
//b) Qual disciplina mais estuda extraclasse? c) Em média, quantas horas você 
//tem estudado por dia? d) Qual sua média de estudos nos finais de semana? 
//e) Quantas horas por semana você tem dedicado para estudar cada disciplina?
   
int main(){
	int mat[100][100], linhas=6, cols=7, i, j,r=0, maior=0, mSobre, mestu; 
	float re=0, media, re1=0, media1, re2=0;
	
	leiaMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	
	for(j=0;j<cols;j++){
		for(i=0;i<linhas;i++){
			r +=  mat[i][j];
			if(r > maior){
				maior = r;
				mSobre = j+1;
			}
		}			
	}
		
	printf("\nO dia da semana em que estou mais sobrecarregado he: ");
	switch(mSobre){
			
	    case 1:
	        printf("SEG\n");
	        break;
		
		case 2:
	   		printf("TER\n");
	        break;
	
		case 3:
	 		printf("QUA\n");
			 break;
		
		case 4:
			printf("QUI\n");
			break;
		
		case 5:
			printf("SEX\n");
			break;
		
		case 6:
			printf("SAB\n");
			break;
		
		default:
			printf("DOM\n ");
	}
	
	maior = mat[0][0];
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(mat[i][j]> maior){
				maior=mat[i][j];
				mestu = i+1; 
			}
		}
	}			
			    
	printf("\nA disciplina que mais estuda extraclasse he: ");
	switch(mestu){
		
	    case 1:
	        printf("D1\n");
	        break;
		
		case 2:
	   		printf("D2\n");
	        break;
	
		case 3:
	 		printf("D3\n");
			 break;
		
		case 4:
			printf("D4\n");
			break;
		
		case 5:
			printf("D5\n");
			break;
		
		default:
			printf("D6\n");
	}
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
			re +=  mat[i][j];
	media = (re / 7.0)/60.0;
	
	printf("\nMedia de horas de estudo por dia: %.2lf\n",media);
	
	for(i=0;i<linhas;i++)
		for(j=5;j<cols;j++)
			re1 +=  mat[i][j];	
	media1 = (re1 / 7.0)/60.0;
	
	printf("\nMedia de horas de estudo nos finais de semana: %.2lf\n",media1);
	
	printf("\nHoras por semana dedicada para estudar a disciplina:\n");
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			re2 +=  mat[i][j];
			
		}
		printf("D%d: %.2lf\n",i+1,re2/60.00);
	}
	return 0;
	return 0;
}
