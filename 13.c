#include<stdio.h>
#include<string.h>

// Você foi encarregado para desenvolver um programa com objetivo de armazenar 
// os pontos do campeonato interno de futebol do IFSULDEMINAS, assim seu programa 
// deve receber o nome e os gols de dois times, e apresentar a pontuação que cada 
// um deve receber pelo jogo, levando-se em consideração que uma vitória dá 3 
// pontos, empate 1 ponto e derrota 0 ponto.
 
int main()
{
	int num1, num2, resul;
	char time1[20] ,time2[20];
	 
	printf("Digite o nome do time 1: ");
	setbuf(stdin, NULL);
	gets(time1);	
	printf("Digite um valor 1: ");
	scanf("%d",&num1);
	
	printf("Digite o nome do time 2: ");
	setbuf(stdin, NULL);
	gets(time2);
	printf("Digite um valor 2: ");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("\nO time %s fez 3 pontos por uma vitoria de %d X %d",time1,num1,num2);	
		printf("\nO time %s fez 0 pontos por uma derota de %d X %d",time2,num1,num2);
	}
	else if(num2 > num1){
		printf("\nO time %s fez 3 pontos por uma vitoria de %d X %d",time2,num2,num1);	
		printf("\nO time %s fez 0 pontos por uma derota de %d X %d",time1,num2,num1);
	}else{
		printf("\nAmbos os times %s e %s fizeram 1 ponto por um empate de %d X %d",time1,time2,num1,num2);	
	}
	
	printf("\n");
	
	system("PAUSE");
	return 0;	
}
