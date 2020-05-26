#include <stdio.h>

int main(void) {

  int M[8][8],i,j, aux=0;
  
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      printf("Digite o valor de [%d][%d]:", i, j);
      scanf("%d", &M[i][j]);
    }
  }

  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(M[i][j] != M[j][i]){
        aux=1;
        i=8;
        j=8;
      }
    }
  }
  printf("\n\n");

  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      printf("%d \t", M[i][j]);
    }
    printf("\n\n");
  }
  
  if(aux==0){
    printf("SIMETRICA");
  }else{
    printf("ASSIMETRICA");
  }
  return 0;
}
