#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2, newsal;
	
	printf("Digite seu salario: ");
	scanf("%f", &num1);
	printf("Digite a porcentagem do seu aumento: ");
	scanf("%f", &num2);
	
	newsal = (num1*num2/100)+num1;
	
	printf("O seu salario com reajuste de 25 porcento e: %.2f",newsal);
	
	return 0;
}
