#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i,cont;
    char word[30];

    for(i=0 ; i<30 ;i++){

    word[i] = NULL;

    }

    printf("Informe a palavra: ");
    gets(word);

    printf("Informe o numero de posicoes: ");
    setbuf(stdin, NULL);
    scanf("%d",&n);

    printf("\n===========CRIPTOGRAFIA===========\n");

    for(i=0 ; i<30 ;i++){

        int valor = word[i]+n;
        if(word[i] != NULL){
            printf("%c",valor);
        }

	}
	return 0;
}
