#include <stdio.h>
#include <stdlib.h>
int main()
{

  int i, j, aux, vet[8];
  aux = 0;

  for(i=0; i<8; i++){
    printf("Digite o valor:");
    scanf("%d", &vet[i]);
  }

  for(i=0; i<=7; i++){
    for(j=0; j<=6; j++){
      if(vet[i] < vet[j]){
        aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
      }
    }
  }
  
  for(i=0; i<8; i++){
    printf("\n VETOR POSIÇÃO [%d]: %d\n",i,vet[i]);
  }
  return 0;
}
