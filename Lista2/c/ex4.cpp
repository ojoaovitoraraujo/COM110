#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, sal;
	
	printf("Digite o salario:");
	scanf("%f", &num1);
	
		
	if(num1<=1000){
		sal = num1*1.15;
		printf("O novo salario sera de: %.0f \n", sal);
	}
	else if(num1>1000 && num1<2000){
		sal = num1*1.10;
		printf("O novo salario sera de: %.0f \n", sal);
	}
	else if(num1>2000){
		sal = num1*1.05;
		printf("O novo salario sera de: %.0f \n", sal);
	}
	
	return 0;
}
