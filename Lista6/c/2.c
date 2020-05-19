#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,j, alacertos[10],aux=0, num;
  char gabarito[8], alresp[8];

//GRAVAR AS RESPOSTAS
  for(i=0; i<8; i++){
    printf("Digite a resposta [%d] do gabarito: ", i+1);
    scanf(" %c", &gabarito[i]);
  }

  printf("\n\n========== ALUNOS ==========\n\n");

  printf("numero de alunos: ");
  scanf("%d", &num);
//CONTA OS ALUNOS
  for(i=0;i<num;i++){

//PEGA RESPOSTAS DOS ALUNOS
    for(j=0;j<8;j++){
      printf("resposta do aluno %d na questao %d: ", i+1,j+1);
      setbuf(stdin, NULL);
      scanf(" %c", &alresp[j]);
      
//VERIFICA SE O ALUNO ACERTOU
      if(alresp[j] == gabarito[j]){
        alacertos[i]++;
      }
    }
    if(alacertos[i] > 6){
      aux++;
    }
    printf("\n\n");
  } 
  alacertos[0]--;

//MOSTA RESPOSTAS
  printf("\n\n========== RESPOSTAS ==========\n\n");
  for(i=0;i<num;i++){
    printf("Aluno %d, respostas certas: %d \n", i+1, alacertos[i]);
  }
  printf("APROVADOS: %d%% ", (aux/num)*100);

  return 0;
}

