#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2;
	
	printf("Digite um numero:");
	scanf("%f", &num1);
	
	printf("Digite um numero:");
	scanf("%f", &num2);
	
	if(num1>num2){
		printf("Ordem crescente: %.2f %.2f ", num2, num1);
	}
	else{
		printf("Ordem crescente: %.2f %.2f", num1, num2);
	}


	return 0;
}
