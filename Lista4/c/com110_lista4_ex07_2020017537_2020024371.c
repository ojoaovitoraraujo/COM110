#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float	x, x1, imc, alt;
	
	printf("Digite sua massa:");
	scanf("%f", &x);
	printf("Digite sua altura:");
	scanf("%f", &x1);
	
	alt = pow(x1,2);
	
	imc = x/alt;
	
	printf("Seu IMC e: %f", imc);
	
	return 0;
}
