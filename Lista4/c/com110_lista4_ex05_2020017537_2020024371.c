#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int	x, res, i;
	
	printf("quantos minutos:");
	scanf("%d", &x);
	
	res = x * 60;
	printf("%d minutos tem: %d segundos", x,res);
	
	return 0;
}
