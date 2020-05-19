#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2, num3, pes1, pes2, pes3, med1, med2, med;
	
	printf("Digite uma nota:");
	scanf("%f", &num1);
	printf("Digite seu peso:");
	scanf("%f", &pes1);
	
	printf("Digite uma nota:");
	scanf("%f", &num2);
	printf("Digite seu peso:");
	scanf("%f", &pes2);
	
	printf("Digite uma nota:");
	scanf("%f", &num3);
	printf("Digite seu peso:");
	scanf("%f", &pes3);
	
	med1= num1*pes1+num2*pes2+num3*pes3;
	med2= pes1+pes2+pes3;
	med = med1/med2;
	
	printf("A media ponderada das suas notas e: %.2f", med);
	
	return 0;
}
