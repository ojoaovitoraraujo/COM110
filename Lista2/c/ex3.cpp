#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2, num3, num4, med;
	
	printf("Digite uma nota:");
	scanf("%f", &num1);
	
	printf("Digite uma nota:");
	scanf("%f", &num2);
	
	printf("Digite uma nota:");
	scanf("%f", &num3);
	
	printf("Digite uma nota:");
	scanf("%f", &num4);
	
	med = (num1+num2+num3+num4)/4;
	
	if(med >= 6){
		printf("Aprovado \n");
	}else{
		printf("Reprovado \n");
	}
	
	printf("A media das suas notas e: %.2f", med);
	
	return 0;
}
