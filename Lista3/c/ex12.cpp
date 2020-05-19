#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int	x=1;
	while(x<=20){
		printf(" %d -", x);
		x++;
	}
	x=20;
	printf("\n");
	while(x>0){
		printf(" %d -", x);
		x--;
	}
	x=1;
	printf("\n");
	while(x<=20){
		if(x%2!=0){
			printf(" %d -", x);
		}
		x++;
	}
	
		
	return 0;
}
