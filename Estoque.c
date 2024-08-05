#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

void listar();
void cadastrar();


char descricao[N][100];
float preco[N];
int quantidade[N];
int codigo[N];
int cont = 0;


void main(){
	int menu;
	do{
		
		system("cls");
		
		printf("ESTOQUE\n");
		printf("1 - CADASTRAR\n");
		printf("2 - LISTAR\n");
		printf("1 - CADASTRAR\n");
		printf("0 - SAIR\n");
		printf("--->  ");
		scanf("%d",&menu);
		
		switch(menu){
		case 1:
			system("cls");
			cadastrar();
			system("pause");
			break;
		case 2:
			system("cls");
			listar();
			system("pause");
			break;
		default:
			break;
		}
		
	}while(menu != 0);
	
}

void listar(){
	
	int i;
	printf("LISTA DE PRODUTOS");
	for(i=0;i<cont;i++){
		printf("________________________");
		printf("\nCODIGO: %d\n",codigo[i]);
		printf("DESCRICAO: %s\n",descricao[i]);
		printf("PRECO: %.2f\n",preco[i]);
		printf("QUANTIDADE: %d\n",quantidade[i]);
		printf("________________________");
	}
}

void cadastrar(){
	fflush(stdin); // Função que limpa o buffer do teclado, o que evita bugs do teclado entre scanf's
	printf("CADASTRO DE PRODUTOS");
	if (cont<N){
		char d[100];
		float pc;
		int qnt;
		system("cls");
		printf("DESCRICAO: ");
		gets(d);
		printf("PRECO: ");
		scanf("%f",&pc);
		printf("QUANTIDADE: ");
		scanf("%d",&qnt);
		
		preco[cont] = pc;
		quantidade[cont] = qnt;
		strcpy(descricao[cont],d);
		codigo[cont] = cont+1;
		cont++;
		printf("CADASTRADO COM SUCESSO");
		
	}else{
		printf("Memoria Cheia!");
	}
	
	
}