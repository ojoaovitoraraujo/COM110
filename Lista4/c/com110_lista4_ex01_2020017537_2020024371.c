#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int	x, res, i;
	
	printf("Digite um numero");
	scanf("%d", &x);
	
	for(i=0;i<=10;i++){
		res=pow(x,i);
		printf("%d \n", res);
	}
	return 0;
	
}
