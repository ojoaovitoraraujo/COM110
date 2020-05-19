#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int	x, x1, i;
	
	printf("Digite um numero:");
	scanf("%d", &x);
	printf("Digite um numero:");
	scanf("%d", &x1);
	
	for(i=x+1;i<x1;i++){
		printf("%d", i);
	}
	
	return 0;
}
