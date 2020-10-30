#include<stdio.h>
#include<stdlib.h>
#include"bibliotecaVetor2.h"

//Deseja-se publicar o número de acertos de cada aluno em uma prova 
//em forma de testes. A prova consta de 10 questões, cada uma com 
//quatro alternativas identificadas por A, B, C, e D. Para isso são 
//dados:o cartão gabarito; o número de alunos da turma; o cartão de 
//respostas para cada aluno, contendo o seu número e suas respostas. 

int main(){
	
	char gabarito[100],aluno[100];	
	int n, i,j, num, pontos=0, resp[100];
	
	printf("Quantos elementos no vetor: ");
	scanf("%d",&n);
	
	printf("Digite o numero de alunos: ");
    scanf("%d",&num);
    
	printf("Digite o gabarito da prova: ");
	fflush(stdin);
	gets(gabarito);
	mostraVetorChar(gabarito,n);
	
	printf("Digite as respostas do:\n ");
	
	for(i=0;i<num;i++){
	pontos = 0;	
	printf("\n----------Aluno [%d]-------------\n\n", i+1);	
	for(j=0;j<n;j++){
		printf("Questao %d:", j+1);
		scanf(" %c", &aluno[i]);	
			if(aluno[i] == gabarito[j]){
			pontos++;
			}
		}
		resp[i] = pontos;		
	}
	
	printf("\n----------RESPOSTA-------------\n");
	for(i=0;i<num;i++){
		printf("Aluno %d acertou %d questoes.\n",i+1,resp[i]);
	}
	
  return 0; 
}

