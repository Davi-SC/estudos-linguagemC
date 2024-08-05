#include <stdio.h>

int calculaA(int);

void main(){
	int num;
	
	printf("Digite um valor: ");
	scanf("%d",&num);
	
	if(num <= 0){
		printf("Valor invalido!");
	}else{
		int a = calculaA(num);
		printf("Valor de A para N = %d e igual a : %d\n", num,a);
	}
	
	
}

int calculaA(int n){
	int valor = 0;
	int i;
	for(i = 1; i <= n; i++){
		valor += (n/i);
		n--;
	}
	return valor;
}

