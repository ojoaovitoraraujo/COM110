#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float num1, num2, num3, med, opc;
	
	printf("Digite uma nota:");
	scanf("%f", &num1);
	
	printf("Digite uma nota:");
	scanf("%f", &num2);
	
	printf("Digite uma nota:");
	scanf("%f", &num3);
	
	printf("DIGITE \n 1 - media aritmetica \n 2 - media geometrica \n 3 - media ponderada \n");
	scanf("%f", &opc);
	
	if(opc==1){
		med = (num1+num2+num3)/3;
		printf("A media aritmetica das suas notas e: %.2f", med);
	}
	else if(opc==2){
		med = pow((num1*num2*num3), (1/3));
		printf("A media geometrica das suas notas e: %.2f", med);
	}
	else if(opc==3){
		med = ((num1*1)+(num2*2)+(num3*3))/6;
		printf("A media ponderada das suas notas e: %.2f", med);
	}
	
	return 0;
}
