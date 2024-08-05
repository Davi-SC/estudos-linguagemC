#include <stdio.h>

float soma(float,float);
float subtracao(float,float);
float multiplica(float,float);
float divide(float,float);

void main(){
	printf("___________CALCULADORA___________\n");
	
	int op;
	float resultado;
	float num1,num2;
	
	while(true){
		printf("1 - SOMA");
		printf("2 - SUBTRACAO");
		printf("3 - MULTIPLICACAO");
		printf("4 - DIVISAO");
		printf("0 - SAIR");
		printf("--->  ");
		scanf("%d",&op);

		if(op ==0){
			break
		}else{
			printf("Digite um valor: ");
			scanf("%f",&num1);	
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			
			if(op == 1){
				resultado = soma(num1,num2);
				printf("%.2f + %.2f = %.2f",num1,num2,resultado);
			}else if(op == 2){
				resultado = subtracao(num1,num2);
				printf("%.2f - %.2f = %.2f",num1,num2,resultado);				
			}else if(op == 3){
				resultado = multiplica(num1,num2);
				printf("%.2f * %.2f = %.2f",num1,num2,resultado);				
			}else if(op == 4){
				if(num2 == 0){
					printf("Impossivel divir por 0");
				}else{
					resultado = divide(num1,num2);
					printf("%.2f / %.2f = %.2f",num1,num2,resultado);	
				}
								
			}else{
				printf("Opcao invalida ! ");
			}
		}
	}
	
}



float soma(float n1,float n2){
	float soma = n1+n2;
	return soma;
}
float subtracao(float n1,float n2){
	float sub = n1-n2;
	return sub;
}
float multiplica(float n1,float n2){
	float mult = n1*n2;
	return mult;
}
float divide(float n1,float n2){
	float divis = n1/n2;
	return divis;
}
