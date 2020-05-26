#include <stdio.h>
#define lin 5
#define col 7

int main(void){
    int matriz[lin][col];
    int vmenor[lin]; 
    int vmaior[col]; 
    int sela_exist;

    for (int i = 0; i < lin; i++) {
      for (int j = 0; j < col; j++) {
          printf("Matriz [%d][%d]: ", i, j);
          scanf("%d", &matriz[i][j]);
      }
    }
    printf("\n");
    printf("Matriz: \n");

    for (int i = 0; i < lin; i++) {
      for (int j = 0; j < col; j++) {
          printf(" %d", matriz[i][j]);
      }
      printf("\n");
    }
    printf("\n");

    for (int i = 0; i < lin; i++) {      
      vmenor[i] = matriz[i][0]; 
      for (int j = 0; j < col; j++) {
        if(matriz[i][j] < vmenor[i]) {
          vmenor[i] = matriz[i][j];
        }
      }   
    }    
    for (int i = 0; i < col; i++) {      
      vmaior[i] = matriz[0][i]; 
      for (int j = 0; j < lin; j++) {
        if(matriz[j][i] > vmaior[i]) {
          vmaior[i] = matriz[j][i];
        }
      }   
    }
    for(int i = 0; i < lin; i++) {
      for(int j = 0; j < col; j++) {
        if(vmaior[j] == vmenor[i]) {
          printf("-> Sela: %d (Matriz[%d][%d])\n", vmenor[i], i, j);
          sela_exist = 1;
        } 
      }
    }

    if(sela_exist != 1) {
        printf("-> Sela inexistente!\n");
    }

    return 0;
}