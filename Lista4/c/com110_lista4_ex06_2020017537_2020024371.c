#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int	x, x1;
	
	printf("escreva um numero:");
	scanf("%d", &x);
	printf("escreva outro numero:");
	scanf("%d", &x1);
	
	
	printf("Soma %d \n", x+x1);
	printf("Subtracao: %d \n", x-x1);
	printf("Multiplicacao: %d \n", x*x1);
	printf("Divisao: %d", x/x1);
	
	return 0;
}
