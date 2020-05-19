#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int x=0, x1=0, maior, menor;
	do{
		printf("numero: ");
		scanf("%d", &x);
		if (x1 == 0){
			maior = x;
			menor = x;
			x1++;
		}
		if (maior < x){
			maior = x;
		}
		if (menor>x && x>=0){
			menor = x;
		}
	}
	while (x >= 0);
	printf("\nmaior = %d", maior);
	printf("\nmenor = %d", menor);
}
