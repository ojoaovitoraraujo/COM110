#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float	x;
	
	printf("Digite as horas no formato 24hrs:");
	scanf("%f", &x);
	printf("Agora e:");

	if(x>=5 && x<12){
		printf("MANHA");
	}
	else if(x>=12 && x<18){
		printf("TARDE");
	}
	else{
		printf("NOITE");
	}
	
	return 0;
}
