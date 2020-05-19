#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float a,b,c,x1, x2, delta;
	
	printf("Digite o valor de a:");
	scanf("%f", &a);
	printf("Digite o valor de b:");
	scanf("%f", &b);
	printf("Digite o valor de c:");
	scanf("%f", &c);
	
		
	delta = b*b - 4*a*c;
	
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	
	printf("O valor de x1 e: %f", x1);
	printf("O valor de x2 e: %f", x2);
	
	return 0;
}

 
