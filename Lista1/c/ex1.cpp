#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2;
	
	printf("Digite seu sal�rio");
	scanf("%f", &num1);
	
	num2 = num1*1.25;
	
	printf("O seu salario com reajuste de 25% e: %.2f", num2);
	
	return 0;
}
