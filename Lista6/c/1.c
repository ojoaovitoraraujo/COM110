#include <stdio.h>
#include <stdlib.h>
int main()
{
//CRIAR VARS
  int i, j, aux, vet[8];
//INICIALIZAR VARS
  aux = 0;
//PREENCHER E EXIBIR VETOR
  for(i=0; i<8; i++){
    printf("Digite o valor:");
    scanf("%d", &vet[i]);
  }
//ORDENAR VETOR
  for(i=0; i<=7; i++){
    for(j=0; j<=6; j++){
      if(vet[i] < vet[j]){
        aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
      }
    }
  }
//EXIBIR VETOR ORDENADO
  for(i=0; i<8; i++){
    printf("\n VETOR POSIÇÃO [%d]: %d\n",i,vet[i]);
  }
  return 0;
}