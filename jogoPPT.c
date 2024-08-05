#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main(){
	
	char nome[100];
	int rod;
	int controle=1;
	int vitorias = 0 ,derrotas = 0 ,empates = 0 ;
	int comp,jog;
	
	while(controle != 0){
		
		fflush(stdin);
		printf("Bem vindo Jogador! Se deseja finalizar o jogo, escreva 'sair'");
		printf("\nQual seu nome?");
		printf("\n-->  ");
		gets(nome);
		controle = strcmp(nome,"sair");
		
		if(controle!=0){
			fflush(stdin);
			printf("\n%s, quantas rodadas deseja joga?",nome);
			printf("\n-->  ");
			scanf("%d",&rod);
			if(rod > 0){
				int i;
				for (i=0;i<rod;i++){
					system("cls");
					printf("-------VAMOS JOGAR-------\n");
					printf("1 - PEDRA\n");
					printf("2 - PAPEL\n");
					printf("3 - TESOURA\n");
					
					comp = 0;
					jog = 0;
					 
					printf("Sua jogada: ");
					fflush(stdin);
					scanf("%d",&jog);
					
					comp = 1 + ( rand() % 10 );
					system("cls");
					
					// Computador jogou pedra
					if(comp == 1 && jog ==1){
						printf("Os dois jogaram pedra\n");
						printf("EMPATE!\n");
						empates += 1;
						system("pause");
					}
					else if(comp == 1 && jog ==2){
						printf("Computador jogou pedra\n");
						printf("%s VENCEU!\n",nome);
						vitorias += 1;
						system("pause");
					}
					else if(comp == 1 && jog ==3){
						printf("Computador jogou pedra\n");
						printf("COMPUTADOR VENCEU!\n");
						derrotas += 1;
						system("pause");
					}
					
					// Computador jogou Papel
					else if(comp == 2 && jog == 2){
						printf("Os dois jogaram papel\n");
						printf("EMPATE\n");
						empates += 1;
						system("pause");
					}
					else if(comp == 2 && jog == 1){
						printf("Computador jogou papel\n");
						printf("COMPUTADOR VENCEU!\n");
						derrotas += 1;
						system("pause");
					}
					else if(comp == 2 && jog == 3){
						printf("Computador jogou papel\n");
						printf("%s VENCEU!\n",nome);
						vitorias += 1;
						system("pause");
					}
					
					// Computador jogou Tesoura
					else if(comp == 3 && jog == 3){
						printf("Os dois jogaram tesoura\n");
						printf("EMPATE\n");
						empates += 1;
						system("pause");
					}
					else if(comp == 3 && jog == 1){
						printf("Computador jogou papel\n");
						printf("COMPUTADOR VENCEU!\n");
						derrotas += 1;
						system("pause");
					}
					else if(comp == 3 && jog == 2){
						printf("Computador jogou papel\n");
						printf("%s VENCEU!\n",nome);
						vitorias += 1;
						system("pause");
					}
				}
				system("cls");
				printf("-------RESULTADO DAS RODADAS-------\n");
				printf("VITORIAS = %d\n",vitorias);	
				printf("DERROTAS = %d\n",derrotas);
				printf("EMPATES = %d\n",empates);
				system("pause");
			}
		}
    	
    	
    	system("cls");
    	
	}	
	
	
}
