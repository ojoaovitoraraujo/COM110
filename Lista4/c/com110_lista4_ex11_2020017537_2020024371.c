#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int	d, m, a, dd, mm, aa, idade;
	
	printf("Digite o dia, mes e ano do seu nacimento");
	scanf("%d  %d  %d", &d, &m, &a);
	printf("Digite o dia, mes, ano atual");	
	scanf("%d  %d  %d", &dd, &mm, &aa);
	
	if ((m > mm) || ((m = mm) && (d > dd)))
       idade = aa - a - 1;
    else idade = aa - a;
    
    printf("idade = %d", idade);
	
	return 0;
}


