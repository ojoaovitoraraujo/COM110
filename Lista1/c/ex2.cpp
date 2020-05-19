#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2, num3, med;
	
	printf("Digite uma nota:");
	scanf("%f", &num1);
	
	printf("Digite uma nota:");
	scanf("%f", &num2);
	
	printf("Digite uma nota:");
	scanf("%f", &num3);
	
	med = (num1+num2+num3)/3;
	
	printf("A media aritmetica das suas notas e: %.2f", med);
	
	return 0;
}
