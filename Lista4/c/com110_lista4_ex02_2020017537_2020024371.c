#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int	x, res, i;
	
	printf("Digite um numero");
	scanf("%d", &x);
	
	while(i<=x){
		res=pow(3,i);
		printf("%d \n", res);
		i++;
	}
}
