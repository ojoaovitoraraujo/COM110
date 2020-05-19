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
	
	//Maior numero
	
	if(num1>num2 && num1>num3){
		printf("O maior deles e: %.0f \n", num1);
	}
	else if(num2>num1 && num2>num3){
		printf("O maior deles e: %.0f \n", num2);
	}
	else if(num3>num1 && num3>num1){
		printf("O maior deles e: %.0f \n", num3);
	}
	
	//Menor numero
	
	if(num1<num2 && num1<num3){
		printf("O menor deles e: %.0f \n", num1);
	}
	else if(num2<num1 && num2<num3){
		printf("O menor deles e: %.0f \n", num2);
	}
	else if(num3<num1 && num3<num1){
		printf("O menor deles e: %.0f \n", num3);
	}
	

	
	return 0;
}
