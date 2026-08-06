#include <stdio.h>
#include <stdlib.h>


typedef struct No{

    int dado;

    struct No *prox;


}No;



int main(){

    No *novo;


    novo = malloc(sizeof(No));


    novo->dado = 10;

    novo->prox = NULL;


    printf("%d",novo->dado);


    free(novo);


    return 0;
}
