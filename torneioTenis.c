#include<stdio.h>
#include <ctype.h>
int main(){
	int i ;
	char resultado;
	int vitorias = 0;
	
	for(i = 0; i < 6; i++){
		
		printf("->");
		scanf("%c", &resultado);
		getchar();
		resultado = toupper(resultado);
		if(resultado == 'V'){
			vitorias++;
		}
	}
	
	if(vitorias == 5 || vitorias == 6){
		printf("1");
	}else if(vitorias == 3 || vitorias == 4){
		printf("2");
	}else if(vitorias == 1 || vitorias == 2){
		printf("3");
	}else{
		printf("-1");
	}
	
	
	return 0;
}