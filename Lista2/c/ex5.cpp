#include<stdio.h>
#include<stdlib.h>
int main(){
	int idade;
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	if(idade >= 16 && idade<18 || idade > 65){
		printf("Eleitor facultativo");
	}
	else if(idade<16){
		printf("Não eleitor");
	}
	else if(idade>=18 && idade<=65){
		printf("Eleitor Obrigatorio");
	}
		
	return 0;
}
