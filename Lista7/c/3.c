#include <stdio.h>

int main(void) {

  int M[4][7],i,j, min= M[0][0], aux, aux2, minmax;
  
  for(i=0;i<4;i++){
    for(j=0;j<7;j++){
      printf("Digite o valor de [%d][%d]:", i, j);
      scanf("%d", &M[i][j]);
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<7;j++){
      if(M[i][j]<min){
        min = M[i][j];
        aux = i;
      }
    }
  }
  minmax = M[aux][0];
  for(j=0;j<7;j++){
    if(M[aux][j]> minmax){
      minmax = M[aux][j];
      aux2=j;
    }
  }
   printf("\n\n");
   for(i=0;i<7;i++){
     for(j=0;j<7;j++){
       printf("%d \t", M[i][j]);
     }
     printf("\n\n");
   }
  
  printf("a linha que contem o menor valor e a: %d \n", aux);
  printf("O MINMAX e: %d \n", minmax); 

  return 0;
}
