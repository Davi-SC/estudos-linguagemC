#include <stdio.h>


void calcula(){
	int i,maior, menor,stop,num;
	int soma = 0;
	
	printf("Quantos numeros deseja digitar -> ");
	scanf("%d",&stop);
	
	if(stop>=0){
		printf("Digite um valor -> ");
		scanf("%d",&num);
		maior = menor = num;
		soma = num;
		
		if(stop>1){
			for(i = 0; i < stop-1;i++){
				printf("Digite um valor -> ");
				scanf("%d",&num);
				
				if(menor>num){
					menor = num;
				}
				if(maior<num){
					maior = num;
				}
				soma += num;
						 			
			}
		}
		printf("\nMedia dos numeros: %d\n",soma/stop);
		printf("Maior : %d\n",maior);
		printf("Menor : %d\n",menor);
	}
}


void main(){
	calcula();
	
	
}


