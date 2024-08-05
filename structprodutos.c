#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maximo 10

typedef struct{
	int id;
	char descricao[100];
	float preco;
	int estoque;
} Produto;

typedef struct{ 						// Esse struct representa a lista de produtos( chama-se struct aninhadas)
	Produto produtos[maximo];			// Vetor de produtos
	int n
} Lista;


Lista cadastrar(Lista, Produto);		// Prototipo da função
void mostrar(Lista);
Produto getProduto(int , Lista);
Lista remover(Lista,int);


void main(){
	
	Lista loja;
	loja.n = 0;

	Produto p;

	p.estoque = 20;
	p.preco = 15;
	strcpy(p.descricao, "Teclado");

	Produto n;

	n.estoque = 30;
	n.preco = 10.65;
	strcpy(n.descricao, "Mouse");


	loja = cadastrar(loja, p);
	loja = cadastrar(loja, n);
	
	mostrar(loja);
	printf("\n");
	
	// Mostrar busca por id
	int procura;
	
	printf("Digite o id do produto que deseja:  ");
	fflush(stdin);
	scanf("%d",&procura);
	
	Produto m = getProduto(procura,loja);
	if(m.id == 0){
		printf("Produto inexistente");
	
	}else{
		printf("________________________________________\n");	
		printf("ID: %d\n", m.id);
		printf("PRECO: %.2f\n", m.preco);
		printf("ESTOQUE: %d\n", m.estoque);
		printf("DESCRICAO: %s\n", m.descricao);
		printf("________________________________________\n");
	}// Mostrar busca por id
	
	system("pause");
	system("cls");
	
	// Remover por id
	printf("\n");
	mostrar(loja);
	fflush(stdin);
	printf("Digite o id do item que deseja excluir: ");
	scanf("%d",&procura);
	loja = remover(loja,procura);
	mostrar(loja);
	system("pause");
	system("cls");
	loja = cadastrar(loja, p);
	mostrar(loja);
}

Lista cadastrar(Lista lista, Produto p)
{
	if (lista.n < maximo)
	{
		lista.produtos[lista.n] = p;
		if(lista.n == 0)
		{
			lista.produtos[lista.n].id = 1;

		}
		else
		{
			lista.produtos[lista.n].id = lista.produtos[lista.n - 1].id + 1;

		}
		lista.n++;
	}
	else
	{
		printf("Lista lotada!");
	}

	return lista;
}

void mostrar(Lista lista){
	int i;
	printf("________________________________________\n");
	for(i = 0; i < lista.n; i++)
	{
		printf("ID: %d\n", lista.produtos[i].id);
		printf("PRECO: %.2f\n", lista.produtos[i].preco);
		printf("ESTOQUE: %d\n", lista.produtos[i].estoque);
		printf("DESCRICAO: %s\n", lista.produtos[i].descricao);
		printf("________________________________________\n");
	}
}

Produto getProduto(int id, Lista lista){
	int i;
	Produto p;
	p.id = 0;
	for(i = 0; i < lista.n; i++){
		if(id == lista.produtos[i].id)
			return lista.produtos[i];
	}
	return p;
}

Lista remover(Lista lista, int id){
	
	int i;
	for(i = 0; i < lista.n; i++){
		if(id == lista.produtos[i].id){
			int j;
            for(j=i; j<lista.n-1 ;j++){
            	lista.produtos[j] = lista.produtos[j+1];
            }
			
		}
	}
	lista.n--;
	return lista;
}

