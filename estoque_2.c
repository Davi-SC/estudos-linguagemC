#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int codigo;
	char descricao[100];
	float preco;
	int quantidade;
}Produto;

typedef struct {
	Produto produtos[100];
	int qtd; //Quantidade de produtos cadastrados
}Estoque;

void main(){
	
	Estoque estoque;
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
			cadastrar(&estoque);

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
	fflush(stdin);
	char descricao[100];
	float preco;
	int qtd;
	
	print("-------- CADASTRAR --------");
	printf("\nDESCRICAO: ");
	gets(descricao);
	printf("\nPRECO");
	scanf("%f",&preco);
	printf("\nQUANTIDADE");
	scanf("%d",&qtd);
	
	int codigo;
	if(estoque->qtd == 0){
		codigo = 1;
	}else{
		codigo = estoque->produtos[estoque->qtd-1].codigo + 1;
	}
	
	
	estoque->produtos[estoque->qtd].preco = preco;
	estoque->produtos[estoque->qtd].quantidade = qtd;
	strcpy(estoque->produtos[estoque->qtd].descricao, descricao);
	
	estoque->produtos[estoque->qtd].codigo = codigo;
	estoque->qtd++;

}//Fim do cadastrar
