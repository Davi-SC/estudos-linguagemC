#include <string.h>
#include <stdio.h>

void pares(int,int);

void main(){
	int x,y;
	printf("Digite um valor: ");
	scanf("%d",&x);
	printf("Digite outro valor: ");
	scanf("%d",&y);
	
	pares(x,y);
	
	
}

void pares(int a, int b){
	int c,i;
	int soma = 0;
	
	if (a>b){
		c = a;
		a = b;
		b = c;
		printf("Esses sao os numeros pares entre %d e %d: \n", a,b);
	}
	
	for(i =a; i<b;i++){
		if (i%2 == 0){
			printf("%d\n",i);
			soma += i;
		} 
	}
	printf("\nSoma dos valores pares: %d\n",soma);
}