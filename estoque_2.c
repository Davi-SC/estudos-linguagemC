#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadastrar(Estoque *estoque);

typedef struct {
	int codigo;
	char descricao[100];
	float preco;
	int quantidade;
}Produto;

typedef struct {
	Produto produtos[100];
	int qtd; //Quantidade de produtos cadastrados
	int p; //Proxima posi��o livre
}Estoque;

void main(){
	
	Estoque estoque;
	estoque.p = 0;
	estoque.qtd = 0;
	
	while(1){
		system("cls");
		printf("Controle de estoque");
		printf("\n1 - CADASTRAR");
		printf("\n2 - LISTAR");
		printf("\n0 - SAIR");
		char op;
		printf("\n>> ");
		scanf("%c", &op);
		
		if(op == '0'){
			break;
		}
		
		switch(op){
		case '1':
			cadastrar(estoque);
			printf(estoque.produtos[0].descricao);
			break;
		case '2':
			
			break;
		default:
			break;
		}	
		
	}
	
	
}// Fim do main

void cadastrar(Estoque *estoque){
	system("cls");
	char descricao[100];
	float preco;
	int qtd;
	
	print("-------- CADASTRAR --------")
	printf("\nDESCRICAO: ");
	gets(descricao);
	printf("\nPRECO");
	scanf("%f",&preco);
	printf("\nQUANTIDADE");
	scanf("%d",&qtd);
	
	int cod;
	if(estoque.p == 0){
		codigo = 1;
	}else{
		codigo = estoque.produtos[estoque.p-1].codigo + 1;
	}
	
	
	estoque.produtos[estoque.p].preco = preco;
	estoque.produtos[estoque.p].quantidade = qtd;
	strcpy(.produtos[estoque.p].descricao, descricao);
	
	estoque.produtos[estoque.p].codigo = codigo;
	estoque.p++;
}
