#include <stdio.h>

int main(void) {

  int M[2][2],i,j, maior=0;
  
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("Digite o valor de [%d][%d]:", i, j);
      scanf("%d", &M[i][j]);

      if(M[i][j]>maior){
        maior = M[i][j];
      }
    }
  }

  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      M[i][j] *= maior;
    }
  }
  printf("\n\n");

  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("%d \t", M[i][j]);
    }
    printf("\n\n");
  }
  return 0;
}