#include<stdlib.h>
#include<stdio.h>
main(){
	int a,b,n;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		for(b=a;b>0 && b<=a;b--){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}

