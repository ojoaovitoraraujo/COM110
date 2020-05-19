#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2, num3;
	
	printf("Digite um numero:");
	scanf("%f", &num1);
	
	printf("Digite um numero:");
	scanf("%f", &num2);
	
	printf("Digite um numero:");
	scanf("%f", &num3);
	
	if(num1>num2 && num2>num3){
		printf("Ordem crescente: %.2f %.2f %.2f ", num3, num2, num1);
	}
	else if(num1>num3 && num3>num2){
		printf("Ordem crescente: %.2f %.2f %.2f ", num2, num3, num1);
	}
	else if(num2>num1 && num1>num3){
		printf("Ordem crescente: %.2f %.2f %.2f ", num3, num1, num2);
	}
	else if(num2>num3 && num3>num1){
		printf("Ordem crescente: %.2f %.2f %.2f ", num1, num3, num3);
	}
	else if(num3>num1 && num1>num2){
		printf("Ordem crescente: %.2f %.2f %.2f ", num2, num1, num3);
	}
	else if(num3>num2 && num2>num1){
		printf("Ordem crescente: %.2f %.2f %.2f ", num1, num2, num3);
	}
	
	return 0;
}
