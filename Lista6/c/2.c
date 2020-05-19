#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,num,j,note=0,cont=0;
    float porcentagem,aux;
    char gabarito[8];

    for(i=0 ; i<8 ; i++){
        printf("Informe a resposta da %d: ",i+1);
        setbuf(stdin, NULL);
        scanf("%c",&gabarito[i]);
    }

    printf("\n\nInforme a quantidade de alunos: ");
    scanf("%d",&num);

    char respostas[num];
  
    for(i=0 ; i<num ; i++){
            printf("\n========ALUNO %d========\n",i+1);
        for(j=0 ; j<8 ; j++){
            printf("Resposta da Questão %d = ",j+1);
            setbuf(stdin, NULL);
            scanf("%c",&respostas[j]);
        
            if(gabarito[j] == respostas[j]){
                note++;
            }
        }
        if(note>=6){
            printf("\nAluno %d APROVADO - Nota: %d\n\n",i+1,note);
            cont++;
        } else {
            printf("\nAluno %d REPROVADO - Nota: %d\n\n",i+1,note);
        }
        note=0;
    }
    aux = cont;
    porcentagem = aux/num;

    printf("APROVACAO = %.2f%%",porcentagem*100);

}
