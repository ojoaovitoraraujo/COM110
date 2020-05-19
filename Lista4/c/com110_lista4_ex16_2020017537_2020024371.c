#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int	x, x1, a, i;
	
	printf("Digite um numero:");
	scanf("%d", &x);
	printf("Digite um numero:");
	scanf("%d", &x1);
	
	for(i=x+1;i<x1;i++){
		for(a=0;a<=10;a++){
			float res = i * a;
			printf("%d x %d = %.1f \n", i, a, res);
		}
		printf("------------------------------------------ \n");	
	}
	
	return 0;
}
