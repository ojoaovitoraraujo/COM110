#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float num1,num2,hip, result;
	
	printf("Digite o valor de um cateto:");
	scanf("%f", &num1);
	
	printf("Digite o valor de outro cateto:");
	scanf("%f", &num2);
	
	result = (num1*num1)+(num2*num2);
	hip = sqrt(result);
	
	
	printf("O valor da hipotenusa e: %.2f", hip);
	
	return 0;
}
