#include <stdio.h>

void trocar(int *n,int *m);

void main(){
	int a,b;
	printf("Valor de A: ");
	scanf("%d",&a);
	printf("Valor de B: ");
	scanf("%d",&b);
	
	trocar(&a,&b);
	
	printf("\nVALORES TROCADOS\n");
	printf("Valor de A: %d",a);	
	printf("\nValor de B: %d", b);
	
}

void trocar(int *n,int *m){
	int x = *n;
	*n = *m;
	*m = x;
}