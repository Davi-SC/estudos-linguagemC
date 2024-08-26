#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char texto[100];
	int i,j;
	int k =0;
	
	printf("Digite algo : ");
	gets(texto);
	
	int tam = strlen(texto);
	char ultimo[100];
	
	for(i = 0;i<tam;i++){
		if (texto[i] == ' '){
			for (j = i; j<tam; j++){
				ultimo[] = texto[];
				k++;
			}
		}
	}
	
	printf("%s",ultimo);
	
	
	
	
	
	
	
	
	
	
	
	// Separar o ultimo, coletar as primeiras letras de cada nome
}
