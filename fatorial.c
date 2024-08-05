#include <stdio.h>

float fatorial(float);

void main(){
	float n;
	
	printf("____________CALCULADORA DE FATORIAL____________\n");
	
	printf("Digite um numero: ");
	scanf("%f",&n);	   

	
	printf("\nO fatorial de %.2f e igual a %.2f ",n,fatorial(n));	
}

float fatorial(float num){
	float fat = 1;
	int i;
	if(num == 0){
		return fat;
	}else{
		for(i = 1; i<=num;i++){
			fat = fat*i;
		}
		return fat;
	}
	
	
}