#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int resp;	
	do{
		printf(" Digite 1 para: OPCAO1 \n Digite 2 para: OPCAO2 \n Digite 3 para: OPCAO3  \n resposta:");
		scanf("%d", &resp);
		printf("----------------------------------------------- \n");
		
	}while(resp!=1 && resp!=2 && resp!=3);
	
	return 0;
}
