#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float	x, x1, mp, mm, ma;
	
	printf("Digite sua valocidade:");
	scanf("%f", &x);
	printf("Digite a velocidade maxima:");
	scanf("%f", &x1);
	
	
	
	if(x<=x1){
		printf("Nao houve multa");
	}else if(x>x1 && x<= x1*1.2){
		printf("O valor da multa e R$85,13");
	}else if(x>x1*1.2 && x<=x1*1.5){
		printf("O valor da multa e R$127,69");
	}else{
		printf("O valor da multa e R$574,62");
	}
	return 0;
}
