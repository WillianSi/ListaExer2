#include <stdio.h>
#include <string.h>

// escrever um programa que decodifique uma mensagem 
// escrita na língua do P eletrônica de Jacy e Kátia
 
int main(){
	
	char palavra[1000];
	int i, n;
	
	printf("Palavra codificada:");
	fflush(stdin);
	gets(palavra);
	
	n = strlen(palavra);
	
	for(i=0;i<n;i++){
		if(palavra[i]!='p')
		   printf("%c",palavra[i]);
		else
		  if(palavra[i-1]=='p' && palavra[i+1]=='p')
		    printf("%c",palavra[i]);    
	}
	
	return 0;
}
