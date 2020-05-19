#include <stdio.h>
#include <stdlib.h>

int main(){

    char word[10];
    int i;


    for(i=0 ; i<10 ; i++){
        word[i] = NULL;
    }

    printf("Informe a palavra: ");
    setbuf(stdin, NULL);
    gets(word);


    printf("\nInverso da palavra:\n");
    for(i=10 ; i>0 ; i--){

        if(word[i-1]!=NULL){
        printf("%c",word[i-1]);
        }
    }
    return 0;
}
